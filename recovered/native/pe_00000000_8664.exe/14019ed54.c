/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019ed54 */

undefined4 FUN_14019ed54(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1401ae820(0,0,0,0,0,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_140193154();
    uVar1 = FUN_14019ec68(param_1,param_2,param_3,param_4);
    FUN_140193160(param_1);
  }
  return uVar1;
}

