/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017960a */

void __fastcall FUN_1017960a(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_10180280;
  local_1c = ExceptionList;
  iVar4 = *param_1;
  if (iVar4 != 0) {
    iVar3 = param_1[1];
    ExceptionList = &local_1c;
    for (; iVar4 != iVar3; iVar4 = iVar4 + 0x2c) {
      local_14 = 0xffffffff;
      local_24 = iVar4;
      FUN_1017960a();
      iVar4 = local_24;
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    iVar4 = *param_1;
    uVar2 = param_1[2] - iVar4;
    iVar3 = iVar4;
    if (0xfff < uVar2) {
      iVar3 = *(int *)(iVar4 + -4);
      if (0x1f < (uint)((iVar4 + -4) - iVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = uVar2 + 0x23;
    }
    FUN_102283a0(iVar3,uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = local_1c;
  return;
}

