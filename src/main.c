#define VK_USE_PLATFORM_WIN32_KHR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vulkan/vulkan.h>

int main() {
    VkResult result;

    // Define application info
    VkApplicationInfo appInfo;
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pNext = NULL;
    appInfo.pApplicationName = "Demi";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "DemEngine";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_0;

    // Fill in the VkInstanceCreateInfo structure
    VkInstanceCreateInfo instanceInfo;
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pNext = NULL;
    instanceInfo.flags = 0;
    instanceInfo.pApplicationInfo = &appInfo;
    instanceInfo.enabledLayerCount = 0;
    instanceInfo.ppEnabledLayerNames = NULL;
    instanceInfo.enabledExtensionCount = 0;
    instanceInfo.ppEnabledExtensionNames = NULL;

    // Create the Vulkan instance
    VkInstance instance;
    result = vkCreateInstance(&instanceInfo, NULL, &instance);

    if (result == VK_SUCCESS) {
        printf("Successfully created Vulkan instance.\n");
    } else {
        printf("Failed to create Vulkan instance.\n");
        return -1;
    }

    // Destroy the Vulkan instance
    vkDestroyInstance(instance, NULL);

    return 0;
}
