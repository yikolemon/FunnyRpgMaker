/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041af0b */

undefined4 FUN_0041af0b(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  SIZE_T local_2c;
  uint local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  pvVar2 = ExceptionList;
  local_20 = (undefined1 *)&local_3c;
  local_18 = &LAB_0041b770;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  uVar9 = 4;
  local_38 = 0;
  iVar3 = 0;
  do {
    pcVar6 = *(char **)(param_4 + iVar3 * 4);
    if (pcVar6 == (char *)0x0) {
      ExceptionList = pvVar2;
      return 0;
    }
    iVar8 = -uVar9;
    iVar7 = 0x1000;
    while (*pcVar6 != '\0') {
      pcVar6 = pcVar6 + 1;
      iVar8 = iVar8 + -1;
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        ExceptionList = pvVar2;
        return 0;
      }
    }
    iVar7 = uVar9 - iVar7;
    uVar9 = iVar7 + 0x1001;
    iVar3 = iVar3 + 1;
  } while (iVar3 != param_3);
  local_2c = iVar7 + 0x1011;
  local_14 = 0xffffffff;
  local_24 = (int *)FUN_00484330(local_2c);
  *local_24 = iVar7 + 0x1011;
  local_24[1] = param_2;
  local_24[2] = param_3;
  if (uVar9 < 0x10001) {
    local_3c = local_24 + 3;
    local_30 = 0;
    local_28 = 0;
    do {
      if ((0x10000 < local_28) || (uVar9 <= local_28 + 2)) goto code_r0x0041b120;
      local_34 = (int)local_3c + local_28;
      iVar7 = *(int *)(param_4 + local_30 * 4);
      local_2c = iVar8 + local_28;
      iVar3 = -0x7ffffffd;
      do {
        iVar4 = iVar3;
        cVar1 = *(char *)(iVar7 + 0x7ffffffd + iVar4);
        iVar3 = iVar4;
        if (cVar1 == '\0') goto code_r0x0041b07f;
        *(char *)(local_34 + 0x7ffffffd + iVar4) = cVar1;
        iVar3 = iVar4 + 1;
      } while ((local_2c + iVar4 != -0x7ffffffd) && (iVar4 != 0));
      if (local_2c + iVar3 == -0x7ffffffc) {
        *(undefined1 *)((int)local_24 + iVar4 + -0x7ffffff7 + local_28) = 0;
        goto code_r0x0041b120;
      }
code_r0x0041b07f:
      *(undefined1 *)(local_34 + iVar3 + 0x7ffffffd) = 0;
      iVar3 = 0xc;
      iVar7 = -1;
      while (*(char *)((int)local_24 + iVar3 + local_28) != '\0') {
        iVar7 = iVar7 + -1;
        iVar4 = local_2c + iVar3;
        iVar3 = iVar3 + 1;
        if (iVar4 == 0xc) goto code_r0x0041b120;
      }
      uVar5 = -iVar7;
      while (3 < uVar5) {
        if (((*(char *)((int)local_24 + iVar3 + (local_28 - 2)) == '3') &&
            (*(char *)((int)local_24 + iVar3 + (local_28 - 1)) == '2')) &&
           (*(char *)((int)local_24 + iVar3 + local_28) == '.')) {
          *(undefined2 *)((int)local_24 + iVar3 + -2 + local_28) = 0x3436;
          break;
        }
        uVar5 = iVar3 - 0xc;
        iVar3 = iVar3 + -1;
      }
      local_28 = local_28 - iVar7;
      local_30 = local_30 + 1;
    } while (local_30 != param_3);
    *param_1 = local_24;
    local_38 = 1;
  }
  else {
code_r0x0041b120:
    local_14 = 0xffffffff;
    thunk_FUN_00495f00(local_24);
  }
  ExceptionList = local_1c;
  return local_38;
}

