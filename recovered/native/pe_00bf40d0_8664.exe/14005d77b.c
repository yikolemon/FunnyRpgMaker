/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005d77b */

undefined8
FUN_14005d77b(longlong param_1,longlong param_2,uint param_3,int param_4,undefined4 *param_5,
             undefined4 *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 3;
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(param_2 + lVar4) == param_4) {
        uVar1 = *(uint *)(param_2 + 0xc + lVar4);
        uVar3 = 0x53;
        if ((*(uint *)(param_1 + 0xc) <= uVar1) &&
           (uVar2 = FUN_140020a93(param_1,uVar1 - *(uint *)(param_1 + 0xc)), (int)uVar2 == 0)) {
          *param_6 = *(undefined4 *)(param_2 + 8 + lVar4);
          *param_5 = *(undefined4 *)(param_2 + 4 + lVar4);
          return 0;
        }
        break;
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)param_3 << 4 != lVar4);
  }
  *param_6 = 0;
  return uVar3;
}

