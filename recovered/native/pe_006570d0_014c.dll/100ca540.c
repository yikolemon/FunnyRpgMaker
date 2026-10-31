/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca540 */

byte FUN_100ca540(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  char ****ppppcVar4;
  byte bVar5;
  uint local_78;
  int local_74;
  char ***local_70 [4];
  int local_60;
  uint local_5c;
  undefined1 local_58 [48];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_78;
  local_18 = 0xffffffff;
  local_1c = &LAB_100cc420;
  local_20 = ExceptionList;
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  ExceptionList = &local_20;
  iVar2 = FUN_1026a77e(puVar1,local_58);
  if (iVar2 == 0) {
    bVar5 = 1;
  }
  else {
    uVar3 = param_1[4];
    if (uVar3 == 0) {
      bVar5 = 0;
    }
    else {
      local_78 = 0;
      do {
        puVar1 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar1 = (undefined4 *)*param_1;
        }
        local_74 = FUN_100ca6e1(puVar1,uVar3,local_78,&DAT_10296a2c,2);
        if (local_74 == -1) {
          local_74 = param_1[4];
        }
        FUN_100729e8(param_1,0,local_74,local_58);
        local_18 = 0;
        if (local_60 == 2) {
          ppppcVar4 = local_70;
          if (0xf < local_5c) {
            ppppcVar4 = (char ****)local_70[0];
          }
          if (*(char *)((int)ppppcVar4 + 1) == ':') {
            FUN_10003d9a(0x5c);
            local_74 = local_74 + 1;
            goto LAB_100ca615;
          }
code_r0x100ca61a:
          ppppcVar4 = local_70;
          if (0xf < local_5c) {
            ppppcVar4 = (char ****)local_70[0];
          }
          iVar2 = FUN_1026a77e(ppppcVar4,local_58);
          if (iVar2 == 0) goto LAB_100ca655;
          ppppcVar4 = local_70;
          if (0xf < local_5c) {
            ppppcVar4 = (char ****)local_70[0];
          }
          iVar2 = __mkdir((char *)ppppcVar4);
          if (iVar2 == 0) goto LAB_100ca655;
          bVar5 = 0;
        }
        else {
LAB_100ca615:
          if (local_60 != 0) goto code_r0x100ca61a;
LAB_100ca655:
          local_78 = local_74 + 1;
          bVar5 = 1;
        }
        local_18 = 0xffffffff;
        FUN_10001fee();
        uVar3 = param_1[4];
      } while ((bVar5 & local_78 < uVar3) != 0);
    }
  }
  ExceptionList = local_20;
  return bVar5;
}

