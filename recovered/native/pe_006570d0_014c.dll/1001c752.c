/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001c752 */

undefined4 FUN_1001c752(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int *unaff_FS_OFFSET;
  undefined1 local_5c [52];
  undefined4 *local_28;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059390;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    local_28 = (undefined4 *)FUN_10228350(0x18);
    local_14 = 0;
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 0) {
      puVar3 = &DAT_10356101;
    }
    else {
      puVar3 = (undefined1 *)(iVar1 + 0x1c);
      if (*(undefined1 **)(iVar1 + 0x18) != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)(iVar1 + 0x18);
      }
    }
    local_21 = 1;
    FUN_1000daa4(puVar3);
    puVar2 = local_28;
    local_22 = 1;
    local_14 = 0xffffffff;
    local_28[1] = 0;
    *local_28 = std::ctype<char>::vftable;
    FUN_1022cc60(local_28 + 2);
    *param_1 = (int)puVar2;
    local_22 = 0;
    FUN_1000dcbe();
  }
  *unaff_FS_OFFSET = local_1c;
  return 2;
}

