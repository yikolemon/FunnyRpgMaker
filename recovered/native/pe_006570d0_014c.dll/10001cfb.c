/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10001cfb */

undefined4 FUN_10001cfb(undefined4 param_1,uint *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *local_54;
  uint *local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  uint *puStack_44;
  uint local_40;
  uint *local_3c;
  uint uStack_38;
  undefined4 uStack_34;
  uint *puStack_30;
  uint local_2c;
  uint local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_10004f80;
  local_1c = ExceptionList;
  uVar2 = param_3[4];
  local_24 = param_3;
  if (7 < param_3[5]) {
    local_24 = (uint *)*param_3;
  }
  ExceptionList = &local_1c;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar3 = (uint)(ushort)*local_24;
    }
    else {
      uVar3 = *local_24;
      if ((uVar3 & 0xffffffdf) - 0x3a0041 < 0x1a) goto code_r0x10001d79;
    }
    if (((short)uVar3 != 0x2f) && ((uVar3 & 0xffff) != 0x5c)) {
      uVar3 = param_2[4];
      if (7 < param_2[5]) {
        param_2 = (uint *)*param_2;
      }
      if (uVar3 == 2) {
        bVar4 = (*param_2 & 0xffffffdf) - 0x3a0041 < 0x1a;
      }
      else {
        bVar4 = false;
      }
      local_28 = 0;
      if ((uVar3 != 0) && (!bVar4)) {
        sVar1 = *(short *)((int)param_2 + uVar3 * 2 + -2);
        local_28 = (uint)CONCAT11((char)((ushort)sVar1 >> 8),sVar1 != 0x2f && sVar1 != 0x5c);
      }
      FUN_10002eb6();
      local_14 = 0;
      local_54 = (uint *)((local_28 & 0xff) + uVar3 + uVar2);
      uStack_34 = CONCAT31(uStack_34._1_3_,(char)local_28);
      puStack_30 = local_24;
      uStack_48 = uStack_34;
      puStack_44 = local_24;
      local_50 = param_2;
      uStack_4c = uVar3;
      local_40 = uVar2;
      local_3c = param_2;
      uStack_38 = uVar3;
      local_2c = uVar2;
      FUN_10003f88();
      ExceptionList = local_1c;
      return param_1;
    }
  }
code_r0x10001d79:
  local_54 = param_2;
  local_20 = (undefined1 *)&local_54;
  FUN_10002e46();
  local_14 = 1;
  local_54 = param_3;
  FUN_1000404c();
  ExceptionList = local_1c;
  return param_1;
}

