#include "UILayer.h"
#include "engine3d/Core/backend/Vulkan/Vulkan.h"
#include <engine3d/Core/EngineLogger.h>
#include <engine3d/Core/third_party/imgui/backends/imgui_impl_glfw.h>
#include <engine3d/Core/third_party/imgui/imgui.h>
#include <engine3d/Core/third_party/imgui/backends/imgui_impl_vulkan.h>

namespace engine3d{
    UILayer::UILayer() : Layer("UILayer") {}

    void UILayer::BeginPlay(){
        CoreLogInfo("UILayer::BeginPlay function called in class {}", Layer::GetLayerString());
        // ImGui_ImplGlfw_NewFrame();
        // IMGUI_CHECKVERSION();
        // ImGui::CreateContext();
        // ImGuiIO& io = ImGui::GetIO(); (void)io;
        // io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
        // io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
        // ImGui::StyleColorsDark();

        // ImGui_ImplGlfw_InitForVulkan(VulkanPipeline::GetCurrentWindow(), true);
        // ImGui_ImplVulkan_NewFrame();
        // ImGui_ImplGlfw_NewFrame();
        // ImGui::NewFrame();
    }

    void UILayer::EndPlay(){
        // CoreLogInfo("UILayer::EndPlay function called in class {}", Layer::GetLayerString());
        // ImGui_ImplVulkan_Shutdown();
        // ImGui_ImplGlfw_Shutdown();
        // ImGui::DestroyContext();
    }

    void UILayer::UpdateFrame(float ts){
        // ImGui::Render();
        // CoreLogInfo("UILayer::UpdateFrame(float) function called in class {}", Layer::GetLayerString());
    }

    void UILayer::UpdateEvent(Event& event){
        // CoreLogInfo("UILayer::UpdateEvent(Event&) function called in class {}", Layer::GetLayerString());
    }

    void UILayer::UpdateUI(){
        // ImGui::Begin("Settings");
        // ImGui::End();
    }

    std::string UILayer::GetName() const { return Layer::GetLayerString(); }
};