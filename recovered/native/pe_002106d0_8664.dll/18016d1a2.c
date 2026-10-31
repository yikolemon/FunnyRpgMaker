/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016d1a2 */

void FUN_18016d1a2(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  int *local_48;
  char local_39;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_2c = 0.0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  iVar2 = FUN_18012b8d7(param_4,"RefScale=%f");
  if (iVar2 == 1) {
    *(float *)(param_3 + 8) = local_2c;
  }
  else {
    iVar2 = FUN_18012b8d7(param_4,"Column %d%n",&local_30,&local_34);
    if (((iVar2 == 1) && (-1 < local_30)) && (local_30 < *(short *)(param_3 + 0xc))) {
      lVar3 = FUN_1800feabf(param_4 + local_34);
      local_39 = '\0';
      lVar1 = param_3 + (longlong)local_30 * 0x10;
      *(short *)(lVar1 + 0x1c) = (short)local_30;
      iVar2 = FUN_18012b8d7(lVar3,"UserID=0x%08X%n",&local_38,&local_34);
      if (iVar2 == 1) {
        lVar3 = FUN_1800feabf(lVar3 + local_34);
        *(int *)(lVar1 + 0x18) = local_38;
      }
      iVar2 = FUN_18012b8d7(lVar3,"Width=%d%n",&local_38,&local_34);
      if (iVar2 == 1) {
        lVar3 = FUN_1800feabf(lVar3 + local_34);
        *(float *)(lVar1 + 0x14) = (float)local_38;
        *(byte *)(lVar1 + 0x22) = *(byte *)(lVar1 + 0x22) & 0xef;
        *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 1;
      }
      iVar2 = FUN_18012b8d7(lVar3,"Weight=%f%n",&local_2c,&local_34);
      if (iVar2 == 1) {
        lVar3 = FUN_1800feabf(lVar3 + local_34);
        *(float *)(lVar1 + 0x14) = local_2c;
        *(byte *)(lVar1 + 0x22) = *(byte *)(lVar1 + 0x22) | 0x10;
        *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 1;
      }
      iVar2 = FUN_18012b8d7(lVar3,"Visible=%d%n",&local_38,&local_34);
      if (iVar2 == 1) {
        lVar3 = FUN_1800feabf(lVar3 + local_34);
        *(byte *)(lVar1 + 0x22) = *(byte *)(lVar1 + 0x22) & 0xf3 | ((byte)local_38 & 3) << 2;
        *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 4;
      }
      iVar2 = FUN_18012b8d7(lVar3,"Order=%d%n",&local_38,&local_34);
      if (iVar2 == 1) {
        lVar3 = FUN_1800feabf(lVar3 + local_34);
        *(undefined2 *)(lVar1 + 0x1e) = (undefined2)local_38;
        *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 2;
      }
      local_48 = &local_34;
      iVar2 = FUN_18012b8d7(lVar3,"Sort=%d%c%n",&local_38,&local_39);
      if (iVar2 == 2) {
        FUN_1800feabf(lVar3 + local_34);
        *(undefined2 *)(lVar1 + 0x20) = (undefined2)local_38;
        *(byte *)(lVar1 + 0x22) = (*(byte *)(lVar1 + 0x22) & 0xfc | local_39 == '^') + 1;
        *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 8;
      }
    }
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

