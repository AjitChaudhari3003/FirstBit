// File: HomeAutomationApp.java
package CS2;

import java.util.*;

public class HomeAutomationApp {
    private List<Room> rooms = new ArrayList<>();
    private Map<String, Device> allDevices = new HashMap<>();

    public void addRoom(String roomName) {
        rooms.add(new Room(roomName));
        System.out.println(roomName + " added.");
    }

    private Room getRoomByName(String roomName) {
        for (Room room : rooms) {
            if (room.getRoomName().equalsIgnoreCase(roomName)) {
                return room;
            }
        }
        return null;
    }

    public void addDeviceToRoom(String roomName, Device device) {
        Room room = getRoomByName(roomName);
        if (room != null) {
            room.addDevice(device);
            allDevices.put(device.getDeviceName().toLowerCase(), device);
        } else {
            System.out.println("Room not found: " + roomName);
        }
    }

    // Global device control
    public void turnOnDevice(String deviceName) {
        Device device = allDevices.get(deviceName.toLowerCase());
        if (device != null) {
            device.turnOn();
        } else {
            System.out.println("Device not found: " + deviceName);
        }
    }

    public void turnOffDevice(String deviceName) {
        Device device = allDevices.get(deviceName.toLowerCase());
        if (device != null) {
            device.turnOff();
        } else {
            System.out.println("Device not found: " + deviceName);
        }
    }

    public void checkStatus() {
        for (Room room : rooms) {
            room.printRoomStatus();
        }
    }

   
}
