set(ENGINE_INCLUDE_NAME ../engine3d)
# set(ENGINE_INTERNAL_INCLUDE ${ENGINE_INCLUDE_NAME}/Core/internal)
set(ENGINE_SRC_DIR engine3d)
set(VULKAN_INCLUDE_DIR ${ENGINE_INCLUDE_NAME}/Core/internal/Vulkan2Showcase)
set(VULKAN_SRC_DIR ${ENGINE_SRC_DIR}/Core/internal/Vulkan2Showcase)

set(VULKAN_SHADERS_INCLUDE_DIR ${VULKAN_INCLUDE_DIR}/Shaders)
set(VULKAN_SHADERS_SRC_DIR ${VULKAN_SRC_DIR}/Shaders)

build_library(
    SOURCES
    ${ENGINE_INCLUDE_NAME}/Core/ApplicationInstance.hpp

    ${ENGINE_INCLUDE_NAME}/Core/EngineLogger.hpp
    ${ENGINE_INCLUDE_NAME}/Core/Window.hpp

    # Update Management includes
    ${ENGINE_INCLUDE_NAME}/Core/TimeManagement/GlobalUpdateManager.hpp
    ${ENGINE_INCLUDE_NAME}/Core/TimeManagement/Timer.hpp
    ${ENGINE_INCLUDE_NAME}/Core/TimeManagement/UpdateManagers/SyncUpdateManager.hpp
    ${ENGINE_INCLUDE_NAME}/Core/TimeManagement/UpdateManagers/ParallelFrameUpdateManager.hpp

    # Application Manager
    ${ENGINE_INCLUDE_NAME}/Core/ApplicationManager/Scene.hpp
    ${ENGINE_INCLUDE_NAME}/Core/ApplicationManager/ThreadMngr.hpp

    # Event system includes
    ${ENGINE_INCLUDE_NAME}/Core/Event/KeyCodes.hpp
    ${ENGINE_INCLUDE_NAME}/Core/Event/MouseCodes.hpp
    ${ENGINE_INCLUDE_NAME}/Core/Event/Event.hpp
    ${ENGINE_INCLUDE_NAME}/Core/Event/InputPoll.hpp
    ${ENGINE_INCLUDE_NAME}/Core/Event/KeyEvent.hpp
    ${ENGINE_INCLUDE_NAME}/Core/Event/MouseEvent.hpp

    ${ENGINE_INCLUDE_NAME}/Core/Scene/SceneObject.hpp



    ${ENGINE_INCLUDE_NAME}/Core/GraphicDrivers/GraphicSwapchain.hpp
    ${ENGINE_INCLUDE_NAME}/Core/GraphicDrivers/Shader.hpp

    ${VULKAN_INCLUDE_DIR}/Vulkan.hpp
    ${VULKAN_INCLUDE_DIR}/helper_functions.hpp
    ${VULKAN_INCLUDE_DIR}/VulkanContext.hpp
    ${VULKAN_INCLUDE_DIR}/VulkanWindow.hpp
    ${VULKAN_INCLUDE_DIR}/VulkanPhysicalDriver.hpp
    ${VULKAN_INCLUDE_DIR}/VulkanDriver.hpp
    ${VULKAN_INCLUDE_DIR}/VulkanSwapchain.hpp
    ${VULKAN_INCLUDE_DIR}/VulkanModel.hpp

    ${VULKAN_SHADERS_INCLUDE_DIR}/VulkanShader.hpp

    # Scene Managment Includes
    ${ENGINE_INCLUDE_NAME}/Core/SceneManagment/Components/GameComponent.hpp
    ${ENGINE_INCLUDE_NAME}/Core/SceneManagment/SceneObjects/SceneObject.hpp
    ${ENGINE_INCLUDE_NAME}/Core/ApplicationManager/GameObjManager/UUID.hpp

    # ${ENGINE_INCLUDE_NAME}/src/Scenes/Assets/Components/Graphics/Meshes/ChildrenMeshes
    # ${ENGINE_SRC_DIR}/src/Scenes/Assets/Components/Graphics/Meshes/ChildrenMeshes/SphereMesh.cpp
    # ${ENGINE_INCLUDE_NAME}/src/Scenes/Assets/Components/Graphics/Meshes/ChildrenMeshes/CubeMesh.cpp

    # Special Component Includes
    ${ENGINE_INCLUDE_NAME}/Core/SceneManagment/Components/SPComps/Transform.hpp

    # Renderer Includes
    ${ENGINE_INCLUDE_NAME}/Core/Renderer/Renderer.hpp

    #############################
    # Source .cpp files below
    #############################
    ${ENGINE_SRC_DIR}/Core/ApplicationInstance.cpp


    ${ENGINE_SRC_DIR}/Core/platforms/main.cpp
    ${ENGINE_SRC_DIR}/Core/platforms/win32.cpp

    ${ENGINE_SRC_DIR}/Core/Window.cpp
    ${ENGINE_SRC_DIR}/Core/EngineLogger.cpp

    ${ENGINE_SRC_DIR}/Core/TimeManagement/GlobalUpdateManager.cpp
    ${ENGINE_SRC_DIR}/Core/TimeManagement/Timer.cpp
    ${ENGINE_SRC_DIR}/Core/TimeManagement/UpdateManagers/SyncUpdateManager.cpp
    ${ENGINE_SRC_DIR}/Core/TimeManagement/UpdateManagers/ParallelFrameUpdateManager.cpp

    ${ENGINE_SRC_DIR}/Core/ApplicationManager/Scene.cpp
    ${ENGINE_SRC_DIR}/Core/ApplicationManager/ThreadMngr.cpp

    ${ENGINE_SRC_DIR}/Core/Scene/SceneObject.cpp

    ${ENGINE_SRC_DIR}/Core/GraphicDrivers/GraphicSwapchain.cpp
    ${ENGINE_SRC_DIR}/Core/GraphicDrivers/Shader.cpp

    ${ENGINE_SRC_DIR}/Core/Event/InputPoll.cpp

    ${VULKAN_SRC_DIR}//helper_functions.cpp
    ${VULKAN_SRC_DIR}/VulkanWindow.cpp
    ${VULKAN_SRC_DIR}/VulkanContext.cpp
    ${VULKAN_SRC_DIR}/VulkanPhysicalDriver.cpp
    ${VULKAN_SRC_DIR}/VulkanDriver.cpp
    ${VULKAN_SRC_DIR}/VulkanSwapchain.cpp

    ${VULKAN_SHADERS_SRC_DIR}/VulkanShader.cpp
    ${VULKAN_SRC_DIR}/VulkanModel.cpp

    ${ENGINE_SRC_DIR}/Core/SceneManagment/SceneObjects/SceneObject.cpp
    ${ENGINE_SRC_DIR}/Core/SceneManagment/Components/GameComponent.cpp
    ${ENGINE_SRC_DIR}/Core/ApplicationManager/GameObjManager/UUID.cpp

    ${ENGINE_SRC_DIR}/Core/SceneManagment/Components/SPComps/Transform.cpp

    ${ENGINE_SRC_DIR}/Core/Renderer/Renderer.cpp

    ${ENGINE_SRC_DIR}/Math/Interpolation.cpp

    ${ENGINE_SRC_DIR}/Physics/JoltHandler.cpp
)
