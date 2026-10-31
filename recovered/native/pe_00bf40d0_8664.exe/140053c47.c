/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140053c47 */

ulonglong FUN_140053c47(longlong *param_1,int *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14001edff(*param_1,param_2);
  if ((int)uVar1 == 0) {
    lVar2 = FUN_140055114(param_1);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 8))
                (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4]
                 ,0,0);
    }
  }
  return uVar1 & 0xffffffff;
}

