/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400691ab */

undefined8 FUN_1400691ab(longlong *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStackY_68 [32];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  local_2c = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1[2];
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffff)) / auVar1,0) < param_2) {
LAB_140069219:
    FUN_140067118((int *)param_1[1],0x40);
  }
  else {
    lVar4 = param_1[2] * param_2;
    lVar2 = FUN_14001f231(*param_1,1,*(uint *)(param_1 + 5),(uint)lVar4,param_1[6],&local_2c);
    param_1[6] = lVar2;
    if (local_2c != 0) goto LAB_140069219;
    param_1[3] = param_2;
    param_1[5] = lVar4;
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    if ((ulonglong)param_1[4] <= param_2) goto LAB_140069229;
    FUN_140067118((int *)param_1[1],0x82);
    param_1[4] = param_2;
  }
  uVar3 = 0;
LAB_140069229:
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStackY_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStackY_68);
}

