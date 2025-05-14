// File: Room.java
package CS2;

import java.util.ArrayList;
import java.util.List;

public class Room {
    private String roomName;
    private List<Device> devices;

    public Room(String roomName) {
        this.roomName = roomName;
        this.devices = new ArrayList<>();
    }

    public String getRoomName() {
        return roomName;
    }

    public void addDevice(Device device) {
        devices.add(device);
        System.out.println(device.getDeviceName() + " added to " + roomName);
    }

    public void printRoomStatus() {
        System.out.println("Room: " + roomName);
        for (Device d : devices) {
            System.out.println("  Device: " + d.getDeviceName() + 
                " | Status: " + (d.isOn() ? "ON" : "OFF") +
                " | Time in current state: " + d.getTimeInCurrentState().getSeconds() + "s");
        }
    }
}
