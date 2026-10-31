/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005160c */

undefined8 FUN_14005160c(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int *piVar3;
  undefined7 uVar4;
  bool bVar5;
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar1 = (undefined4 *)FUN_140113dd4();
  *puVar1 = 0;
  FUN_140006874(local_48,param_1);
  lVar2 = FUN_140022bdc(local_48);
  piVar3 = (int *)FUN_140113dd4();
  if (*piVar3 == 0) {
    bVar5 = 0 < lVar2;
    uVar4 = (undefined7)((ulonglong)piVar3 >> 8);
  }
  else {
    piVar3 = (int *)FUN_140113dd4();
    if (*piVar3 != 0x22) {
      return 0;
    }
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(char **)param_1;
    }
    bVar5 = *param_1 != '-';
    uVar4 = (undefined7)((ulonglong)piVar3 >> 8);
  }
  *(bool *)param_2 = bVar5;
  return CONCAT71(uVar4,1);
}

