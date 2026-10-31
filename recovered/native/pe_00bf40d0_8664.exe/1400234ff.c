/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400234ff */

undefined8
FUN_1400234ff(longlong *param_1,undefined8 param_2,undefined1 (*param_3) [16],undefined8 *param_4,
             undefined4 *param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  puVar1 = FUN_140023739(*param_1,param_3,(ulonglong *)".resource/");
  if (puVar1 == (ulonglong *)0x0) {
    uVar2 = 0x40;
  }
  else {
    *param_4 = puVar1;
    *param_5 = 0;
    uVar2 = 0;
  }
  return uVar2;
}

