using Plots

# Choose backend
gr()
# plotlyjs()

data = readdlm("data.txt")
rows = 1:size(data, 1)
x = data[rows,1]
raw = data[rows,2]
ewma = data[rows,3]

plot(x, raw, background_color=RGB(0.2, 0.2, 0.2), lab="raw")
plot!(x, ewma, lab="EWMA")

title!("Potentiometer reading vs. time")
xaxis!("Time [ms]")
yaxis!("Voltage signal [ADC units]")

savefig("adc.svg")