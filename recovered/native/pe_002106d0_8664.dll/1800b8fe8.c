/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b8fe8 */

longlong * FUN_1800b8fe8(longlong *param_1,char param_2)

{
  char cVar1;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined1 local_100 [72];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  longlong *local_58;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = param_1 + 0x17;
  local_49 = param_2;
  FUN_180044980();
  local_58 = param_1;
  if ((char)param_1[0x16] == '\x01') {
    local_118 = 0;
    lStack_110 = 0;
    local_108 = 0;
    FUN_18002266a(local_100);
    local_a8 = local_58[1];
    lVar4 = *local_58;
    while (lVar4 != local_a8) {
      local_b8 = *(longlong *)(lVar4 + 0x28);
      local_b0 = lVar4;
      for (lVar7 = *(longlong *)(lVar4 + 0x20); lVar7 != local_b8; lVar7 = lVar7 + 0x50) {
        uVar2 = *(longlong *)(lVar7 + 0x40) - *(longlong *)(lVar7 + 0x38) >> 5;
        uVar6 = *(longlong *)(lVar7 + 0x28) - *(longlong *)(lVar7 + 0x20) >> 5;
        if (uVar2 < uVar6) {
          uVar6 = uVar2;
        }
        for (uVar2 = 0; uVar2 < uVar6; uVar2 = uVar2 + 1) {
          lVar4 = *(longlong *)(lVar7 + 0x20);
          if (local_49 == '\0') {
LAB_1800b90f1:
            lVar8 = uVar2 * 0x20;
            FUN_180003216(&local_a0,lVar4 + lVar8);
            FUN_180003216(&local_80,*(longlong *)(lVar7 + 0x38) + lVar8);
            puVar3 = (uint *)FUN_1800ba89c(&local_118,lVar8 + *(longlong *)(lVar7 + 0x20));
            if (puVar3 != &local_a0) {
              FUN_180004c8c(puVar3);
              puVar3[4] = (uint)local_90;
              puVar3[5] = local_90._4_4_;
              puVar3[6] = (uint)uStack_88;
              puVar3[7] = uStack_88._4_4_;
              *puVar3 = local_a0;
              puVar3[1] = uStack_9c;
              puVar3[2] = uStack_98;
              puVar3[3] = uStack_94;
              local_90 = 0;
              uStack_88 = 0xf;
              local_a0 = local_a0 & 0xffffff00;
              FUN_180004c8c(puVar3 + 8);
              *(undefined8 *)(puVar3 + 0xc) = local_70;
              *(undefined8 *)(puVar3 + 0xe) = uStack_68;
              puVar3[8] = local_80;
              puVar3[9] = uStack_7c;
              puVar3[10] = uStack_78;
              puVar3[0xb] = uStack_74;
              local_70 = 0;
              uStack_68 = 0xf;
              local_80 = local_80 & 0xffffff00;
            }
            FUN_180001ef2(&local_80);
            FUN_180001ef2(&local_a0);
          }
          else {
            cVar1 = FUN_18001ba14(lVar4 + uVar2 * 0x20,uVar2 * 0x20 + *(longlong *)(lVar7 + 0x38));
            if (cVar1 == '\0') {
              lVar4 = *(longlong *)(lVar7 + 0x20);
              goto LAB_1800b90f1;
            }
          }
        }
      }
      lVar4 = local_b0 + 0x78;
    }
    if (local_58 + 0xb != &local_118) {
      FUN_1800baf8e(local_58 + 0xb,local_118,lStack_110 - local_118 >> 6);
    }
    FUN_1800bb340(local_58 + 0xe,local_100);
    *(undefined1 *)(local_58 + 0x16) = 0;
    FUN_1800ba944(&local_118);
  }
  plVar5 = local_58 + 0xb;
  FUN_18023d6e0(local_60);
  return plVar5;
}

