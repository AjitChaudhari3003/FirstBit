// File: BaseDevice.java
package CS2;

import java.time.Duration;
import java.time.LocalDateTime;

public abstract class BaseDevice implements Device {
    protected String name;
    protected boolean isOn;
    protected LocalDateTime stateChangedTime;

    public BaseDevice(String name) {
        this.name = name;
        this.isOn = false;
        this.stateChangedTime = LocalDateTime.now();
    }

    @Override
    public String getDeviceName() {
        return name;
    }

    @Override
    public void turnOn() {
        if (!isOn) {
            isOn = true;
            stateChangedTime = LocalDateTime.now();
            System.out.println(name + " turned ON.");
        } else {
            System.out.println(name + " is already ON.");
        }
    }

    @Override
    public void turnOff() {
        if (isOn) {
            isOn = false;
            stateChangedTime = LocalDateTime.now();
            System.out.println(name + " turned OFF.");
        } else {
            System.out.println(name + " is already OFF.");
        }
    }

    @Override
    public boolean isOn() {
        return isOn;
    }

    @Override
    public Duration getTimeInCurrentState() {
        return Duration.between(stateChangedTime, LocalDateTime.now());
    }
}
