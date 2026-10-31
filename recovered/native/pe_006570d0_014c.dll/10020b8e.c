/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10020b8e */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_10020b8e(int param_1,int param_2,undefined4 *param_3,int *param_4,uint param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10c0 [4];
  int local_10bc;
  int local_10b0;
  undefined4 local_105c;
  undefined4 local_1054;
  int local_104c;
  uint local_1040;
  byte local_1032;
  undefined1 local_1030;
  undefined1 local_1028 [4096];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = &stack0xfffffffc;
  uStack_14 = 0x10020ba1;
  local_24 = auStack_10c0;
  local_18 = 0xffffffff;
  local_1c = &LAB_10059610;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  puVar5 = &stack0xfffffffc;
  puVar2 = auStack_10c0;
  if (param_3 != (undefined4 *)0x0) {
    *(undefined1 *)(param_3 + 1) = 1;
    FUN_1001992e(0,local_1028);
    puVar5 = local_28;
    puVar2 = local_24;
  }
  local_24 = puVar2;
  local_28 = puVar5;
  iVar1 = *param_4;
  if (iVar1 == 0) {
    puVar5 = (undefined1 *)0x0;
    goto code_r0x10020d49;
  }
  local_10bc = (uint)(param_1 != param_2 & (byte)(param_5 >> 0xe) & 1) + param_1;
  puVar5 = local_1028;
  FUN_1001937a(local_10bc,param_2,param_4 + 1,iVar1,*(undefined4 *)(iVar1 + 0x1c),
               *(undefined4 *)(iVar1 + 0x14),param_5,puVar5);
  local_18 = 0;
  local_10b0 = local_104c;
  local_1030 = 0;
  local_105c = 0;
  local_1032 = 0;
  bVar3 = FUN_1001a4a4(local_1054);
  if (((bVar3 | local_1032) & 1) == 0) {
    puVar5 = (undefined1 *)0x0;
    if (((param_5 & 0x40) == 0) && (local_10bc != param_2)) {
      local_1040 = local_1040 & 0xffffdeff | 0x100;
      do {
        local_10bc = FUN_10020e60(local_10bc + 1,param_2,0,0);
        if (local_10bc == param_2) {
          local_104c = param_2;
          local_10b0 = param_2;
          local_1030 = 0;
          local_105c = 0;
          local_1032 = 0;
          uVar4 = FUN_1001a4a4(local_1054);
          puVar5 = (undefined1 *)CONCAT31((int3)((uint)uVar4 >> 8),(byte)uVar4 | local_1032);
          goto LAB_10020c77;
        }
        local_1030 = 0;
        local_105c = 0;
        local_1032 = 0;
        local_10b0 = local_10bc;
        local_104c = local_10bc;
        bVar3 = FUN_1001a4a4(local_1054);
      } while (((bVar3 | local_1032) & 1) == 0);
      goto LAB_10020c75;
    }
  }
  else {
LAB_10020c75:
    puVar5 = (undefined1 *)CONCAT31((int3)((uint)puVar5 >> 8),1);
LAB_10020c77:
    if ((param_3 != (undefined4 *)0x0) && (((uint)puVar5 & 1) != 0)) {
      FUN_1001966e(param_3);
      *param_3 = param_6;
      param_3[5] = param_1;
      *(bool *)(param_3 + 7) = param_1 != param_3[6];
      puVar5 = (undefined1 *)CONCAT31((int3)((uint)puVar5 >> 8),1);
    }
  }
  local_18 = 0xffffffff;
  FUN_10019768();
code_r0x10020d49:
  *unaff_FS_OFFSET = local_20;
  return (uint)puVar5 & 0xffffff01;
}

