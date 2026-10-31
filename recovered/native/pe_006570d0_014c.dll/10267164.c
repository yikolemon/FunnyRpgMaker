/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10267164 */

uint __thiscall FUN_10267164(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  bool bVar8;
  uint local_24;
  uint uStack_20;
  undefined1 *local_1c;
  int local_8;
  
  puVar6 = (undefined1 *)0x0;
  if (*(char *)((int)param_1 + 0x2e) == '\0') {
    puVar4 = (undefined4 *)param_1[0x1b];
    param_1[0x1b] = (uint)(puVar4 + 1);
    puVar6 = (undefined1 *)*puVar4;
    if (puVar6 == (undefined1 *)0x0) {
      puVar4 = (undefined4 *)FUN_10268ffd();
      *puVar4 = 0x16;
      puVar4 = (undefined4 *)FUN_10273ea8();
      goto LAB_10267199;
    }
    if ((*param_1 & 1) == 0) goto LAB_102671db;
    param_1[0x1b] = (uint)(puVar4 + 2);
    iVar7 = puVar4[1];
    if (iVar7 == 0) {
      if ((*param_1 & 4) != 0) {
        __crt_stdio_input::string_input_adapter<char>::get
                  ((string_input_adapter<char> *)(param_1 + 2));
        *puVar6 = 0;
      }
LAB_102671ce:
      puVar4 = (undefined4 *)FUN_10268ffd();
      *puVar4 = 0xc;
      goto LAB_10267199;
    }
  }
  else {
LAB_102671db:
    iVar7 = -1;
  }
  uVar1 = param_1[0xc];
  uVar2 = param_1[0xd];
  local_8 = iVar7;
  if ((param_2 != 0) && (iVar7 != -1)) {
    local_8 = iVar7 + -1;
  }
  uStack_20 = 0;
  local_24 = 0;
  local_1c = puVar6;
  while( true ) {
    if (((uVar1 != 0 || uVar2 != 0) && (local_24 == uVar1)) && (uStack_20 == uVar2))
    goto LAB_1026728f;
    iVar5 = __crt_stdio_input::string_input_adapter<char>::get
                      ((string_input_adapter<char> *)(param_1 + 2));
    cVar3 = FUN_10266d3f(param_2,iVar5);
    if (cVar3 == '\0') break;
    if (*(char *)((int)param_1 + 0x2e) == '\0') {
      if (local_8 == 0) {
        if (iVar7 != -1) {
          *puVar6 = 0;
        }
        goto LAB_102671ce;
      }
      *local_1c = (char)iVar5;
      local_1c = local_1c + 1;
      local_8 = local_8 + -1;
    }
    bVar8 = 0xfffffffe < local_24;
    local_24 = local_24 + 1;
    uStack_20 = uStack_20 + bVar8;
  }
  __crt_stdio_input::string_input_adapter<char>::unget
            ((string_input_adapter<char> *)(param_1 + 2),iVar5);
LAB_1026728f:
  puVar6 = (undefined1 *)(local_24 | uStack_20);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 == (undefined1 *)0x0) {
LAB_10267199:
    return (uint)puVar4 & 0xffffff00;
  }
  if ((param_2 == 0) && ((local_24 != uVar1 || (uStack_20 != uVar2)))) {
    puVar6 = (undefined1 *)(*param_1 & 4);
    puVar4 = (undefined4 *)0x0;
    if (puVar6 == (undefined1 *)0x0) goto LAB_10267199;
  }
  if ((*(char *)((int)param_1 + 0x2e) == '\0') && (param_2 != 0)) {
    *local_1c = 0;
    puVar6 = local_1c;
  }
  return CONCAT31((int3)((uint)puVar6 >> 8),1);
}

