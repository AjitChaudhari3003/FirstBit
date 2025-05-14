package casestudy1;

import java.util.Date;

public class Salary extends Account {
    private Date lastTransactionDate;

    public Salary(long acNumber, String acHolderName, double balance) {
        super(acNumber, acHolderName, balance);
        this.lastTransactionDate = new Date();
    }

    public void updateLastTransactionDate() {
        this.lastTransactionDate = new Date();
    }

    public boolean isFrozen() {
        long diff = new Date().getTime() - lastTransactionDate.getTime();
        long daysInactive = diff / (1000 * 60 * 60 * 24);
        return daysInactive > 60;
    }

    @Override
    public double calculateInterest() {
        return balance * 0.03; // 3% annual interest
    }
}
