/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402893ae */

void FUN_1402893ae(undefined1 *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 local_60 [24];
  char *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char local_2c [12];
  
  local_2c[4] = -2;
  local_2c[5] = -1;
  local_2c[6] = -1;
  local_2c[7] = -1;
  local_2c[8] = -1;
  local_2c[9] = -1;
  local_2c[10] = -1;
  local_2c[0xb] = -1;
  if (*param_2 != '\0') {
    local_48 = (char *)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_140227632(&local_48,10);
    *local_48 = *param_2;
    for (uVar3 = 1; uVar3 < 10; uVar3 = uVar3 + 1) {
      cVar1 = FUN_140289c02(param_1 + 0x10);
      local_48[uVar3] = cVar1;
    }
    local_2c[2] = 0;
    local_2c[0] = '\0';
    local_2c[1] = '\0';
    lVar2 = -3;
    do {
      local_2c[lVar2 + 3] = local_48[(byte)param_1[lVar2 + 0xb]];
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0);
    *param_1 = 1;
    FUN_1402889dc(param_1,local_60);
    FUN_14028fb52(param_1,local_60,local_2c);
    FUN_140288ab0(param_1 + 0x10,local_60);
    FUN_1402161ba(local_60);
    FUN_1402161ba(&local_48);
  }
  return;
}

