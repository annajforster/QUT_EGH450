#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/uavteam2/QUT_EGH450/src/depthai_publisher_updated"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/uavteam2/QUT_EGH450/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/uavteam2/QUT_EGH450/install/lib/python3/dist-packages:/home/uavteam2/QUT_EGH450/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/uavteam2/QUT_EGH450/build" \
    "/usr/bin/python3" \
    "/home/uavteam2/QUT_EGH450/src/depthai_publisher_updated/setup.py" \
     \
    build --build-base "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/uavteam2/QUT_EGH450/install" --install-scripts="/home/uavteam2/QUT_EGH450/install/bin"