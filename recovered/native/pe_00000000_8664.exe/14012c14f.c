/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012c14f */

int FUN_14012c14f(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)param_1[1];
  uVar2 = *puVar1;
  lVar6 = FUN_14012afda(uVar2,0x18,&local_3c);
  if (local_3c == 0) {
    lVar3 = *param_1;
    param_1[3] = lVar3;
    iVar5 = *(int *)(lVar3 + 0x38);
    *(int *)(param_1 + 4) = iVar5;
    if ((*(longlong *)(lVar3 + 0x60) != 0) &&
       (pcVar4 = *(code **)(*(longlong *)(lVar3 + 0x60) + 8), pcVar4 != (code *)0x0)) {
      local_3c = (*pcVar4)(uVar2,param_1 + 0xc);
      if (local_3c != 0) {
        FUN_140128b39(uVar2,lVar6);
        goto LAB_14012c218;
      }
      param_1[0xd] = *(longlong *)(*(longlong *)(lVar3 + 0x60) + 0x20);
      param_1[0xe] = *(longlong *)(lVar3 + 0x40);
      iVar5 = *(int *)(lVar3 + 0x38);
    }
    if (iVar5 == 0x53564720) {
      param_1[0xe] = *(longlong *)(lVar3 + 0x40);
    }
    *(longlong **)(lVar6 + 0x10) = param_1;
    FUN_14012b008(puVar1 + 0x23,lVar6);
    FUN_14012fe7b(puVar1);
    local_3c = 0;
  }
LAB_14012c218:
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

