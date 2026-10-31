/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001c350 */

undefined4 FUN_1001c350(int *param_1)

{
  undefined4 *puVar1;
  undefined4 ***pppuVar2;
  int *unaff_FS_OFFSET;
  undefined8 uVar3;
  undefined1 local_74 [52];
  undefined4 **local_40 [5];
  uint local_2c;
  undefined4 *local_28;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_74;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059350;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    local_28 = (undefined4 *)FUN_10228350(0x10);
    local_14 = 0;
    local_22 = 1;
    FUN_1001c4a2(local_40);
    local_14 = 1;
    pppuVar2 = local_40;
    if (0xf < local_2c) {
      pppuVar2 = (undefined4 ***)local_40[0];
    }
    local_21 = 1;
    FUN_1000daa4(pppuVar2);
    puVar1 = local_28;
    local_23 = 1;
    local_14 = 0xffffffff;
    local_28[1] = 0;
    *local_28 = std::collate<char>::vftable;
    uVar3 = FUN_1022ca50();
    *(undefined8 *)(puVar1 + 2) = uVar3;
    *param_1 = (int)puVar1;
    local_23 = 0;
    FUN_1000dcbe();
    local_21 = 0;
    FUN_10001fee();
  }
  *unaff_FS_OFFSET = local_1c;
  return 1;
}

