/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10287383 */

void FUN_10287383(undefined1 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined4 local_14;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  puVar5 = (undefined2 *)*param_2;
  puVar6 = param_1;
  puVar2 = puVar5;
  if (param_1 != (undefined1 *)0x0) {
    do {
      local_14 = puVar2;
      puVar4 = local_10;
      if (3 < param_3) {
        puVar4 = param_1;
      }
      uVar1 = FUN_10278471(puVar4,*puVar5,param_4,param_5);
      if (uVar1 == 0xffffffff) {
        *param_2 = local_14;
        goto LAB_1028747b;
      }
      if (puVar4 != param_1) {
        puVar2 = local_14;
        if (param_3 < uVar1) goto LAB_1028742f;
        FUN_1025b2d0(param_1,puVar4,uVar1);
      }
      if (uVar1 != 0) {
        if (param_1[uVar1 - 1] == '\0') goto LAB_1028742a;
        local_14 = puVar5 + 1;
      }
      puVar5 = puVar5 + 1;
      param_3 = param_3 - uVar1;
      param_1 = param_1 + uVar1;
      puVar2 = local_14;
    } while( true );
  }
  while ((iVar3 = FUN_10278471(local_10,*puVar5,param_4,param_5), iVar3 != -1 &&
         ((iVar3 == 0 || (local_10[iVar3 + -1] != '\0'))))) {
    puVar5 = puVar5 + 1;
  }
LAB_1028747b:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0(puVar6);
LAB_1028742a:
  puVar2 = (undefined2 *)0x0;
LAB_1028742f:
  *param_2 = puVar2;
  goto LAB_1028747b;
}

