/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003d0ae */

longlong FUN_14003d0ae(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1401c5180(param_1,param_2,0x2018);
  lVar1 = param_1 + 0x2018;
  FUN_140007f78(lVar1,param_2 + 0x2018);
  FUN_1401c5180(param_1 + 0x2058,param_2 + 0x2058,0x1000,param_4,lVar1,param_1,uVar2);
  return param_1;
}

