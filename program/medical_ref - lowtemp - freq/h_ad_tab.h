/************************************************************************************************************************************
overview:
        1、各个传感器的阻值表，采集到的AD值对应的温度；
           不包括热电偶的，热电偶的在自己的文件夹中
        
**************************************************************************************************************************************/

#ifndef __AD_TAB_H__
#define __AD_TAB_H__
//--------------------------------------------------------------------
#define   TEMP1_TAB_LENGTH    90   //环境温度表
#define   TEMP2_TAB_LENGTH    100  //热交换温度表
#define   TEMP3_TAB_LENGTH    250  //PT100温度表
#define   TEMP4_TAB_LENGTH    100  //电池温度表
//--------------------------------------------------------------------
// peak  环温 、冷凝器用的阻值范围，参考excel表格THW
const int16_t temp1_for_ad[] =
{
	-40
,	-39
,	-38
,	-37
,	-36
,	-35
,	-34
,	-33
,	-32
,	-31
,	-30
,	-29
,	-28
,	-27
,	-26
,	-25
,	-24
,	-23
,	-22
,	-21
,	-20
,	-19
,	-18
,	-17
,	-16
,	-15
,	-14
,	-13
,	-12
,	-11
,	-10
,	-9
,	-8
,	-7
,	-6
,	-5
,	-4
,	-3
,	-2
,	-1
,	0
,	1
,	2
,	3
,	4
,	5
,	6
,	7
,	8
,	9
,	10
,	11
,	12
,	13
,	14
,	15
,	16
,	17
,	18
,	19
,	20
,	21
,	22
,	23
,	24
,	25
,	26
,	27
,	28
,	29
,	30
,	31
,	32
,	33
,	34
,	35
,	36
,	37
,	38
,	39
,	40
,	41
,	42
,	43
,	44
,	45
,	46
,	47
,	48
,	49
,	50
};
//--------------------------------------------------------------------
//peak 环温、冷凝器阻值范围对应的AD值的范围
const int16_t ad_to_temp1[] =
{
	944
,	939
,	934
,	929
,	923
,	917
,	911
,	905
,	898
,	892
,	885
,	877
,	870
,	862
,	853
,	845
,	836
,	827
,	818
,	808
,	798
,	788
,	778
,	767
,	757
,	745
,	734
,	723
,	711
,	699
,	687
,	675
,	663
,	650
,	638
,	625
,	612
,	599
,	587
,	574
,	561
,	548
,	535
,	523
,	510
,	497
,	485
,	472
,	460
,	448
,	436
,	424
,	412
,	401
,	389
,	378
,	367
,	357
,	346
,	336
,	326
,	316
,	306
,	297
,	288
,	279
,	270
,	261
,	253
,	245
,	237
,	230
,	222
,	215
,	208
,	201
,	195
,	189
,	182
,	177
,	171
,	165
,	160
,	155
,	150
,	145
,	140
,	135
,	131
,	127
,	123
};
//--------------------------------------------------------------------
//peak 热交换器的阻值范围，参TE表格
const int16_t temp2_for_ad[] =
{
	-50
,	-49
,	-48
,	-47
,	-46
,	-45
,	-44
,	-43
,	-42
,	-41
,	-40
,	-39
,	-38
,	-37
,	-36
,	-35
,	-34
,	-33
,	-32
,	-31
,	-30
,	-29
,	-28
,	-27
,	-26
,	-25
,	-24
,	-23
,	-22
,	-21
,	-20
,	-19
,	-18
,	-17
,	-16
,	-15
,	-14
,	-13
,	-12
,	-11
,	-10
,	-9
,	-8
,	-7
,	-6
,	-5
,	-4
,	-3
,	-2
,	-1
,	0
,	1
,	2
,	3
,	4
,	5
,	6
,	7
,	8
,	9
,	10
,	11
,	12
,	13
,	14
,	15
,	16
,	17
,	18
,	19
,	20
,	21
,	22
,	23
,	24
,	25
,	26
,	27
,	28
,	29
,	30
,	31
,	32
,	33
,	34
,	35
,	36
,	37
,	38
,	39
,	40
,	41
,	42
,	43
,	44
,	45
,	46
,	47
,	48
,	49
,	50
};
//--------------------------------------------------------------------
//peak 热交换器阻值范围对应的AD值的范围
const int16_t ad_to_temp2[] =
{
	972
,	969
,	967
,	964
,	961
,	958
,	954
,	951
,	947
,	943
,	939
,	934
,	930
,	925
,	920
,	914
,	909
,	903
,	897
,	890
,	884
,	877
,	869
,	862
,	854
,	846
,	837
,	829
,	820
,	810
,	801
,	791
,	781
,	770
,	760
,	749
,	738
,	726
,	715
,	703
,	691
,	679
,	667
,	655
,	642
,	630
,	617
,	604
,	591
,	579
,	566
,	553
,	540
,	528
,	515
,	502
,	490
,	477
,	465
,	453
,	441
,	429
,	417
,	406
,	394
,	383
,	372
,	362
,	351
,	341
,	331
,	321
,	311
,	302
,	292
,	283
,	275
,	266
,	258
,	250
,	242
,	234
,	227
,	219
,	212
,	206
,	199
,	193
,	186
,	180
,	175
,	169
,	163
,	158
,	153
,	148
,	143
,	139
,	134
,	130
,	126
};
//--------------------------------------------------------------------
//peak PT100的阻值范围
const int16_t temp3_for_ad[] =
{
	-200
,	-199
,	-198
,	-197
,	-196
,	-195
,	-194
,	-193
,	-192
,	-191
,	-190
,	-189
,	-188
,	-187
,	-186
,	-185
,	-184
,	-183
,	-182
,	-181
,	-180
,	-179
,	-178
,	-177
,	-176
,	-175
,	-174
,	-173
,	-172
,	-171
,	-170
,	-169
,	-168
,	-167
,	-166
,	-165
,	-164
,	-163
,	-162
,	-161
,	-160
,	-159
,	-158
,	-157
,	-156
,	-155
,	-154
,	-153
,	-152
,	-151
,	-150
,	-149
,	-148
,	-147
,	-146
,	-145
,	-144
,	-143
,	-142
,	-141
,	-140
,	-139
,	-138
,	-137
,	-136
,	-135
,	-134
,	-133
,	-132
,	-131
,	-130
,	-129
,	-128
,	-127
,	-126
,	-125
,	-124
,	-123
,	-122
,	-121
,	-120
,	-119
,	-118
,	-117
,	-116
,	-115
,	-114
,	-113
,	-112
,	-111
,	-110
,	-109
,	-108
,	-107
,	-106
,	-105
,	-104
,	-103
,	-102
,	-101
,	-100
,	-99
,	-98
,	-97
,	-96
,	-95
,	-94
,	-93
,	-92
,	-91
,	-90
,	-89
,	-88
,	-87
,	-86
,	-85
,	-84
,	-83
,	-82
,	-81
,	-80
,	-79
,	-78
,	-77
,	-76
,	-75
,	-74
,	-73
,	-72
,	-71
,	-70
,	-69
,	-68
,	-67
,	-66
,	-65
,	-64
,	-63
,	-62
,	-61
,	-60
,	-59
,	-58
,	-57
,	-56
,	-55
,	-54
,	-53
,	-52
,	-51
,	-50
,	-49
,	-48
,	-47
,	-46
,	-45
,	-44
,	-43
,	-42
,	-41
,	-40
,	-39
,	-38
,	-37
,	-36
,	-35
,	-34
,	-33
,	-32
,	-31
,	-30
,	-29
,	-28
,	-27
,	-26
,	-25
,	-24
,	-23
,	-22
,	-21
,	-20
,	-19
,	-18
,	-17
,	-16
,	-15
,	-14
,	-13
,	-12
,	-11
,	-10
,	-9
,	-8
,	-7
,	-6
,	-5
,	-4
,	-3
,	-2
,	-1
,	0
,	1
,	2
,	3
,	4
,	5
,	6
,	7
,	8
,	9
,	10
,	11
,	12
,	13
,	14
,	15
,	16
,	17
,	18
,	19
,	20
,	21
,	22
,	23
,	24
,	25
,	26
,	27
,	28
,	29
,	30
,	31
,	32
,	33
,	34
,	35
,	36
,	37
,	38
,	39
,	40
,	41
,	42
,	43
,	44
,	45
,	46
,	47
,	48
,	49
,	50
};
//--------------------------------------------------------------------
//peak PT100阻值范围对应的AD值的范围
const int16_t ad_to_temp3[] =
{
	1023
,	1019
,	1015
,	1010
,	1006
,	1002
,	997
,	993
,	988
,	984
,	980
,	975
,	971
,	966
,	962
,	958
,	953
,	949
,	945
,	940
,	936
,	932
,	927
,	923
,	919
,	914
,	910
,	906
,	902
,	897
,	893
,	889
,	884
,	880
,	876
,	871
,	867
,	863
,	859
,	854
,	850
,	846
,	842
,	837
,	833
,	829
,	825
,	820
,	816
,	812
,	808
,	803
,	799
,	795
,	791
,	786
,	782
,	778
,	774
,	770
,	765
,	761
,	757
,	753
,	749
,	744
,	740
,	736
,	732
,	728
,	723
,	719
,	715
,	711
,	707
,	703
,	699
,	694
,	690
,	686
,	682
,	678
,	674
,	669
,	665
,	661
,	657
,	653
,	649
,	645
,	640
,	636
,	632
,	628
,	624
,	620
,	616
,	612
,	608
,	603
,	599
,	595
,	591
,	587
,	583
,	579
,	575
,	571
,	567
,	562
,	558
,	554
,	550
,	546
,	542
,	538
,	534
,	530
,	526
,	522
,	518
,	514
,	510
,	506
,	502
,	497
,	493
,	489
,	485
,	481
,	477
,	473
,	469
,	465
,	461
,	457
,	453
,	449
,	445
,	441
,	437
,	433
,	429
,	425
,	421
,	417
,	413
,	409
,	405
,	401
,	397
,	393
,	389
,	385
,	381
,	377
,	373
,	369
,	365
,	361
,	357
,	353
,	349
,	345
,	341
,	337
,	333
,	329
,	325
,	321
,	317
,	313
,	309
,	305
,	301
,	297
,	293
,	289
,	285
,	281
,	277
,	273
,	269
,	266
,	262
,	258
,	254
,	250
,	246
,	242
,	238
,	234
,	230
,	226
,	222
,	218
,	214
,	210
,	206
,	202
,	199
,	195
,	191
,	187
,	183
,	179
,	175
,	171
,	167
,	163
,	159
,	155
,	152
,	148
,	144
,	140
,	136
,	132
,	128
,	124
,	120
,	116
,	113
,	109
,	105
,	101
,	97
,	93
,	89
,	85
,	81
,	78
,	74
,	70
,	66
,	62
,	58
,	54
,	50
,	47
,	43
,	39
,	35
,	31
,	27
,	23
,	20
,	16
,	12
,	8
,	4
};
//--------------------------------------------------------------------
//peak 电池温度的阻值范围 参Tbat
const int16_t temp4_for_ad[] =
{
	0
,	1
,	2
,	3
,	4
,	5
,	6
,	7
,	8
,	9
,	10
,	11
,	12
,	13
,	14
,	15
,	16
,	17
,	18
,	19
,	20
,	21
,	22
,	23
,	24
,	25
,	26
,	27
,	28
,	29
,	30
,	31
,	32
,	33
,	34
,	35
,	36
,	37
,	38
,	39
,	40
,	41
,	42
,	43
,	44
,	45
,	46
,	47
,	48
,	49
,	50
,	51
,	52
,	53
,	54
,	55
,	56
,	57
,	58
,	59
,	60
,	61
,	62
,	63
,	64
,	65
,	66
,	67
,	68
,	69
,	70
,	71
,	72
,	73
,	74
,	75
,	76
,	77
,	78
,	79
,	80
,	81
,	82
,	83
,	84
,	85
,	86
,	87
,	88
,	89
,	90
,	91
,	92
,	93
,	94
,	95
,	96
,	97
,	98
,	99
,	100
};
//--------------------------------------------------------------------
//peak 电池阻值范围对应的AD值的范围
const int16_t ad_to_temp4[] =
{
	861
,	855
,	849
,	843
,	836
,	830
,	823
,	816
,	810
,	803
,	794
,	785
,	776
,	767
,	758
,	751
,	744
,	738
,	731
,	724
,	716
,	707
,	699
,	690
,	682
,	673
,	665
,	656
,	647
,	639
,	630
,	621
,	612
,	603
,	594
,	585
,	577
,	568
,	559
,	550
,	541
,	533
,	524
,	515
,	506
,	498
,	489
,	481
,	472
,	464
,	455
,	447
,	439
,	431
,	424
,	416
,	408
,	400
,	393
,	385
,	378
,	370
,	363
,	356
,	349
,	342
,	335
,	328
,	322
,	315
,	309
,	303
,	297
,	291
,	285
,	279
,	273
,	267
,	262
,	256
,	251
,	245
,	240
,	234
,	229
,	224
,	220
,	215
,	211
,	207
,	203
,	198
,	194
,	190
,	186
,	182
,	178
,	174
,	171
,	167
,	164
};
//--------------------------------------------------------------------
#endif
