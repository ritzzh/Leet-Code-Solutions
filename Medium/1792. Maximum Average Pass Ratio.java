// Learned from editorial

class Solution {
    public double maxAverageRatio(int[][] classes, int extraStudents) {
        PriorityQueue<double[]> maxHeap = new PriorityQueue<>((a,b) -> 
            Double.compare(b[0],a[0])
        );

        for( int[] single : classes ) {
            int passing = single[0];
            int total = single[1];
            double gain = calculateGain(passing, total);
            maxHeap.offer(new double[]{gain, passing, total});
        }

        while ( extraStudents-- > 0 ) {
            double[] current = maxHeap.poll();
            int passing = (int)current[1];
            int total = (int)current[2];
            maxHeap.offer(
                new double[] {
                    calculateGain(passing +1, total + 1),
                    passing + 1,
                    total + 1
                }
            );
        }

        double totalPassRatio = 0;
        while(!maxHeap.isEmpty()) {
            double[] current = maxHeap.poll();
            int passing = (int)current[1];
            int total = (int)current[2];
            totalPassRatio += (double) passing/ total;
        }

        return totalPassRatio / classes.length;

    }

    private double calculateGain(int passing, int totalstudent) {
        return (
            (double) (passing + 1)/ (totalstudent +1) -
            (double) (passing)/ (totalstudent)
        );
    }
}
