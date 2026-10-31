/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1b6c */

void __fastcall FUN_100f1b6c(int *param_1)

{
  DWORD DVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int iVar6;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100f54e0;
  local_1c = ExceptionList;
  iVar6 = *param_1;
  local_14 = 0;
  ExceptionList = &local_1c;
  local_28 = iVar6;
  piVar2 = &local_28;
  if (iVar6 != 0) {
    local_24 = (int *)FUN_100f1a24();
    if (param_1 == local_24) {
      if (param_1[1] == 0) {
        iVar6 = 0;
      }
      else {
        *(undefined4 *)(param_1[1] + 8) = 0;
        iVar6 = param_1[1];
      }
      FUN_100f1ad0(iVar6);
      piVar2 = (int *)local_20;
    }
    else {
      iVar3 = param_1[2];
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)FUN_10018d26(iVar6 + 0xc);
        iVar6 = local_28;
        if (param_1 == (int *)*puVar4) {
          DVar1 = *(DWORD *)(local_28 + 0x10);
          DVar5 = GetCurrentThreadId();
          if (DVar1 != DVar5) {
            FUN_100f1ad0(local_24);
            FUN_100f1af6(iVar6 + 0xc,param_1,2);
            piVar2 = (int *)local_20;
            goto code_r0x100f1c37;
          }
        }
        FUN_100f1ad0(local_24);
        piVar2 = (int *)local_20;
      }
      else {
        iVar6 = param_1[1];
        if (iVar6 != 0) {
          *(int *)(iVar6 + 8) = iVar3;
          iVar3 = param_1[2];
        }
        *(int *)(iVar3 + 4) = iVar6;
        FUN_100f1ad0(local_24);
        piVar2 = (int *)local_20;
      }
    }
  }
code_r0x100f1c37:
  local_20 = (undefined1 *)piVar2;
  local_14 = 0xffffffff;
  FUN_100f0f14();
  ExceptionList = local_1c;
  return;
}

