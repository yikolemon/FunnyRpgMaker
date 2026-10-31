/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e94bd */

longlong FUN_1800e94bd(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1802a82f0(param_1,param_2,0x2018);
  lVar1 = param_1 + 0x2018;
  FUN_1800181b0(lVar1,param_2 + 0x2018);
  FUN_1802a82f0(param_1 + 0x2058,param_2 + 0x2058,0x1000,param_4,lVar1,param_1,uVar2);
  return param_1;
}

