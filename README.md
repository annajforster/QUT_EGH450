# QUT_EGH450
*Group 2 for EGB349 and EGH450 Systems Engineering Drone Automation Project 2024*
This project leverages several modules forked from the QUTAS GitHub repository. These modules have been adapted to provide enhanced functionality or used directly without modifications, depending on project needs. 

## **Contributing:**

**GitHub Push and Pull Request Process:**

**1. Fork the Repository:**
Create a personal copy of the original repository. (if you're a Group 2 member, THIS ONE)

**2. Create a New Branch:**
Within your forked repository, create a new branch.

**3. Make Changes:**
Work on your changes in the new branch.

**4. Commit Changes:**
Commit your changes with a clear message.

**5. Push to Your Fork:**
Push your changes to your forked repository.

**6. Create a Pull Request:**
Initiate a pull request to merge your changes into the original repository.

**7. Review and Discussion:**
Engage in discussions with maintainers to address feedback or questions.

**8. Merge or Close:**
If approved, the pull request will be merged. Otherwise, it will be closed.

**Additional Tips:**

* **Use descriptive commit messages.**
* **Keep branches up-to-date with the original repository.**
* **Be responsive to feedback and discussions.**

**Example Markdown for a Pull Request:**
```markdown
## Feature: Add new feature
This pull request adds a new feature to the project.

**Changes:**
- Added a new function to calculate [calculation].
- Updated the documentation.

**Testing:**
- Unit tests have been added to cover the new functionality.
```

## **Modules**

### DEPTH AI PUBLISHER
* **Description:** This module is essential for enabling the UAV to perceive targets and navigate to encompass it's entire environment. It includes ROS publisher nodes that publish critical information to the SPAR module for localisation and target navigation.

### SPAR
* **Description:** The SPAR module houses the software responsible for the UAV's autopilot, navigation, and localisation functions. Key components include:
    * Breadcrumb path planning service for generating low-level waypoints (TBD)
    * Diversion to preallocated regions of interest (ROI)
    * Localisation of target positions within the world frame
    * Miscellaneous programs for testing and verification
    * Payload deployment code, which activates servo motors to release a trapdoor

### QUTAS LAB 450
* **Description:** This module generates the simulated world environment for the QUT GP O-134 flight area. It's primarily a clone of the provided QUT repository, with minor modifications to change the UAV's name and any new environment adjustments

### EGH450 TARGET SOLVEPNP
* **Description:** This module is used as the junction between IMP and ANL subsystems to integrate the detected targets into readable coordinates for the UAV to be deployed to. The scripts are utilised within the IMP subsystem to create Publisher/Subscriber nodes for POSE and coordinates for the ANL subsystem to apply within their ROI based operations...
