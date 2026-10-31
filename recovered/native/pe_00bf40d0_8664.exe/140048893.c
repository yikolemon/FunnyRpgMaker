/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140048893 */

ulonglong FUN_140048893(longlong *param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_14004a25c(param_1);
  uVar2 = FUN_14001edff(*param_1,param_2);
  if (lVar1 != 0 && (int)uVar2 == 0) {
    (**(code **)(lVar1 + 8))
              (*(undefined8 *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0
               ,0);
  }
  return uVar2 & 0xffffffff;
}

