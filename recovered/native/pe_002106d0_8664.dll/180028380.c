/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180028380 */

undefined8 * FUN_180028380(char *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *local_848;
  ulonglong local_840;
  ulonglong local_838;
  code *local_830;
  undefined4 local_828 [502];
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  iVar2 = (int)param_4[1];
  local_848 = local_828;
  local_830 = FUN_180028564;
  local_838 = 500;
  local_840 = 1;
  local_828[0] = 0;
  pcVar9 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar9 = *(char **)param_1;
  }
  iVar7 = 0;
  local_50 = param_2;
  while (*(longlong *)(param_1 + 0x30) != 0) {
    pcVar4 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar4 = *(char **)param_1;
    }
    if (pcVar9 == pcVar4 + *(longlong *)(param_1 + 0x10)) {
      cVar3 = (pcVar4 + *(longlong *)(param_1 + 0x10))[-1];
    }
    else {
      cVar3 = *pcVar9;
      if ((byte)(cVar3 + 0x81U) < 0x82) break;
      pcVar9 = pcVar9 + 1;
    }
    iVar7 = iVar7 + cVar3;
    if ((iVar7 == 0) || (iVar2 <= iVar7)) break;
    uVar6 = local_840 + 1;
    if (local_838 < uVar6) {
      (*local_830)(&local_848);
      uVar6 = local_840 + 1;
    }
    local_848[local_840] = iVar7;
    local_840 = uVar6;
  }
  iVar7 = (int)local_840 + -1;
  for (uVar8 = 0; (int)uVar8 < iVar2; uVar8 = uVar8 + 1) {
    if (iVar2 - uVar8 == local_848[iVar7]) {
      pcVar9 = param_1 + 0x20;
      if (0xf < *(ulonglong *)(param_1 + 0x38)) {
        pcVar9 = *(char **)(param_1 + 0x20);
      }
      FUN_180018bde(param_3,pcVar9,pcVar9 + *(longlong *)(param_1 + 0x30));
      iVar7 = iVar7 + -1;
    }
    uVar1 = *(undefined1 *)(*param_4 + (ulonglong)uVar8);
    lVar5 = param_3[1];
    uVar6 = lVar5 + 1;
    if ((ulonglong)param_3[2] < uVar6) {
      (*(code *)param_3[3])(param_3);
      lVar5 = param_3[1];
      uVar6 = lVar5 + 1;
    }
    param_3[1] = uVar6;
    *(undefined1 *)(*param_3 + lVar5) = uVar1;
  }
  *local_50 = param_3;
  if (local_848 != local_828) {
    thunk_FUN_180290e40();
  }
  return local_50;
}

