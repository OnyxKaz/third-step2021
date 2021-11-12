require "narray"
score_s=[65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70]
score_e=[44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]
def std(arr_x)
  avg=arr_x.sum/arr_x.length
  arr1=arr_x.map{|x| (x-avg)**2}
  return Math.sqrt(arr1.sum/arr_x.length).round(2)
end
def dev(arr_x)
avg=arr_x.sum/arr_x.length
arr1=arr_x.map{|x|(x-avg)**2}
std=Math.sqrt(arr1.sum/arr_x.length)
return arr_x.map{|x| ((x-avg)*10/std+50).round(2)}
end
#理科
p score_s.sum.to_f
score2_s=NArray.to_na([65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70])
p score2_s.mean
p std(score_s)
p dev(score_s)
p score_s.sort.reverse
#英語
p score_e.sum.to_f
score2_e=NArray.to_na([44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84])
p score2_e.mean
p std(score_e)
p dev(score_e)
p score_e.sort.reverse
