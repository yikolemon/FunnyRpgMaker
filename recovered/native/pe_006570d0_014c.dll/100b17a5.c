/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b17a5 */

undefined4 * __fastcall FUN_100b17a5(undefined4 *param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint local_2c;
  uint local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_100c1bc0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_24 = param_1;
  if ((param_2 < param_3 && *param_4 != param_4[1]) &&
     (local_28 = param_4[1] - *param_4 >> 1, local_28 <= param_3 - param_2)) {
    local_28 = param_3 - local_28;
    while (param_2 <= local_28) {
      iVar1 = *param_4;
      local_2c = param_2;
      if (param_4[1] - iVar1 != 0) {
        iVar3 = 0;
        do {
          if ((*(char *)(iVar1 + 1 + iVar3 * 2) == '\0') &&
             (*(char *)(iVar1 + iVar3 * 2) != *(char *)(param_2 + iVar3))) goto code_r0x100b1862;
          iVar3 = iVar3 + 1;
        } while (param_4[1] - iVar1 >> 1 != iVar3);
      }
      puVar2 = (uint *)local_24[1];
      if (puVar2 == (uint *)local_24[2]) {
        local_14 = 0;
        FUN_10051662(puVar2,&local_2c);
      }
      else {
        *puVar2 = param_2;
        local_24[1] = local_24[1] + 4;
      }
code_r0x100b1862:
      param_2 = local_2c + 1;
    }
  }
  ExceptionList = local_1c;
  return local_24;
}

