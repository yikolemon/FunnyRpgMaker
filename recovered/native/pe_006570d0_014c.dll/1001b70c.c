/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b70c */

char * FUN_1001b70c(char param_1,char *param_2,char *param_3,uint *param_4,int param_5,uint param_6)

{
  uint uVar1;
  undefined4 ****ppppuVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 ***local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 ***local_30;
  char *local_2c;
  uint local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_18 = &LAB_100592c0;
  local_1c = ExceptionList;
  local_3c = 0;
  local_4c = (undefined4 ****)0x0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_38 = 0xf;
  local_14 = 0;
  local_2c = param_2;
  ExceptionList = &local_1c;
  ppppuVar2 = &local_4c;
  if (param_4 != (uint *)0x0) {
    FUN_10003d9a((int)param_1);
    local_34 = *param_4;
    local_28 = 1;
    local_30 = &local_4c;
    local_24 = (uint *)param_2;
    while ((local_28 < local_34 &&
           (local_24 = (uint *)((int)local_24 + 1), local_24 != (uint *)param_3))) {
      cVar3 = *(char *)local_24;
      if ((param_6 >> 8 & 1) != 0) {
        cVar3 = (**(code **)(**(int **)(param_5 + 4) + 0x10))((int)cVar3);
      }
      FUN_10003d9a((int)cVar3);
      local_28 = local_28 + 1;
    }
    if (0xf < local_38) {
      local_30 = local_4c;
    }
    local_28 = local_3c;
    do {
      uVar1 = *param_4;
      local_24 = param_4;
      if ((uVar1 <= local_28) && (uVar5 = param_4[2], uVar1 <= uVar5)) {
        uVar6 = param_4[3];
        do {
          iVar4 = FUN_102595e0(local_30,uVar6,uVar1);
          if (iVar4 == 0) {
            local_2c = local_2c + uVar1;
            ppppuVar2 = (undefined4 ****)local_20;
            goto code_r0x1001b82b;
          }
          uVar6 = uVar6 + uVar1;
          uVar5 = uVar5 - uVar1;
        } while (uVar1 <= uVar5);
      }
      param_4 = (uint *)local_24[4];
      ppppuVar2 = (undefined4 ****)local_20;
    } while (param_4 != (uint *)0x0);
  }
code_r0x1001b82b:
  local_20 = (undefined1 *)ppppuVar2;
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return local_2c;
}

