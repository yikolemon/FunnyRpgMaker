/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180121fec */

undefined4
FUN_180121fec(undefined4 param_1,uint param_2,float param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  lVar2 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(DAT_180419160 + 0x2acd) & 4) != 0) {
    FUN_1800fdfea("[docking] DockBuilderSplitNode: node 0x%08X, split_dir %d\n",param_1,param_2);
  }
  lVar4 = FUN_180120868(lVar2,param_1);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    local_70 = 0;
    uStack_68 = 0;
    local_a0 = 3;
    local_98 = 0;
    local_88 = 0;
    bVar5 = (param_2 & 0xfffffffd) == 0;
    if (!bVar5) {
      param_3 = DAT_1802ac570 - param_3;
    }
    fVar6 = DAT_1802ac570;
    if (param_3 <= DAT_1802ac570) {
      fVar6 = param_3;
    }
    local_7c = ~-(uint)(param_3 < 0.0) & (uint)fVar6;
    local_78 = 0;
    local_90 = lVar4;
    local_80 = param_2;
    FUN_18011fb42(lVar2);
    uVar3 = **(undefined4 **)(lVar4 + 0x20 + (ulonglong)!bVar5 * 8);
    uVar1 = **(undefined4 **)(lVar4 + 0x20 + (ulonglong)bVar5 * 8);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar3;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = uVar1;
    }
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_c8)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_c8);
}

