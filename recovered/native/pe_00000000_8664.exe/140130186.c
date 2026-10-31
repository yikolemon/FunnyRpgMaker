/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140130186 */

undefined8
FUN_140130186(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1401303c0(*param_1,param_3,".resource/");
  if (lVar1 == 0) {
    uVar2 = 0x40;
  }
  else {
    *param_4 = lVar1;
    *param_5 = 0;
    uVar2 = 0;
  }
  return uVar2;
}

