/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b2448 */

longlong FUN_1402b2448(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 ****ppppuVar11;
  undefined8 ***local_128;
  undefined4 *puStack_120;
  undefined4 *local_118;
  ulonglong local_110;
  undefined1 local_108 [24];
  undefined1 local_f0 [72];
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong local_80;
  uint local_74;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_68 = param_1;
  FUN_140212724(param_1,"o long");
  local_80 = local_68 + 0x20;
  FUN_140212724(local_80,"o long");
  local_70 = (longlong *)(local_68 + 0x40);
  *(undefined8 *)(local_68 + 0x40) = 0;
  *(undefined8 *)(local_68 + 0x48) = 0;
  *(undefined8 *)(local_68 + 0x50) = 0;
  *(undefined4 *)(local_68 + 0x58) = 0;
  local_88 = local_68 + 0x60;
  *(undefined8 *)(local_68 + 0x60) = 0;
  *(undefined8 *)(local_68 + 0x68) = 0;
  *(undefined8 *)(local_68 + 0x70) = 0;
  *(undefined8 *)(local_68 + 0x78) = 0;
  FUN_140212724(local_68 + 0x80,"o long");
  FUN_14029cd70(param_2,&local_128);
  FUN_1402239f4(local_68,&local_128);
  FUN_1402125bc(&local_128);
  lVar1 = param_2 + 0x10;
  uVar4 = FUN_140289b16(lVar1);
  for (uVar10 = 0; uVar10 < uVar4; uVar10 = uVar10 + 1) {
    FUN_1402b35aa(&local_128,param_2);
    FUN_1402b382a(local_70,&local_128);
    FUN_1402b1652(&local_128);
  }
  uVar4 = FUN_140289b16(lVar1);
  for (uVar10 = 0; uVar10 < uVar4; uVar10 = uVar10 + 1) {
    FUN_1402b370a(&local_128,param_2);
    FUN_1402b3ca8(local_88,&local_128);
    FUN_14027f028(local_f0);
    FUN_1402161ba(local_108);
    FUN_1402125bc(&local_128);
  }
  FUN_14029cd70(param_2,&local_128);
  FUN_1402239f4(local_80,&local_128);
  FUN_1402125bc(&local_128);
  uVar5 = FUN_140289b16(lVar1);
  *(undefined4 *)(local_68 + 0x7c) = uVar5;
  uVar4 = 0;
  while( true ) {
    lVar2 = *(longlong *)(local_68 + 0x40);
    if ((ulonglong)(*(longlong *)(local_68 + 0x48) - lVar2 >> 7) <= (ulonglong)uVar4) break;
    uVar3 = FUN_140289c02(lVar1);
    *(undefined1 *)(lVar2 + 0x20 + (ulonglong)uVar4 * 0x80) = uVar3;
    uVar4 = uVar4 + 1;
  }
  local_128 = (undefined8 ***)CONCAT44(local_128._4_4_,*(int *)(local_68 + 0x7c) - uVar4);
  FUN_140289a38(lVar1,&local_128);
  uVar4 = FUN_140289b16(lVar1);
  for (uVar10 = 0; uVar10 < uVar4; uVar10 = uVar10 + 1) {
    lVar2 = *local_70;
    FUN_14029cd70(param_2,&local_128);
    ppppuVar11 = (undefined8 ****)((ulonglong)uVar10 * 0x80 + lVar2 + 0x28);
    if (ppppuVar11 != &local_128) {
      ppppuVar7 = &local_128;
      if (7 < local_110) {
        ppppuVar7 = (undefined8 ****)local_128;
      }
      FUN_140215958(ppppuVar11,ppppuVar7,local_118);
    }
    FUN_1402125bc(&local_128);
  }
  local_74 = FUN_140289b16(lVar1);
  for (uVar4 = 0; uVar4 < local_74; uVar4 = uVar4 + 1) {
    local_a8 = 0;
    lStack_a0 = 0;
    local_98 = 0;
    uVar10 = FUN_140289b16(lVar1);
    for (uVar9 = 0; uVar9 < uVar10; uVar9 = uVar9 + 1) {
      FUN_14029cd70(param_2,&local_128);
      FUN_14029d5e0(&local_a8,&local_128);
      FUN_1402125bc(&local_128);
    }
    plVar6 = (longlong *)(*local_70 + (ulonglong)uVar4 * 0x80 + 0x48);
    if (plVar6 != &local_a8) {
      FUN_1402b41c6(plVar6,local_a8,lStack_a0 - local_a8 >> 5);
    }
    FUN_14027f028(&local_a8);
  }
  uVar4 = FUN_140289b16(lVar1);
  if (uVar4 != 0) {
    uVar8 = 0;
    do {
      local_128 = (undefined8 ****)0x0;
      puStack_120 = (undefined4 *)0x0;
      local_118 = (undefined4 *)0x0;
      uVar10 = FUN_140289b16(lVar1);
      for (uVar9 = 0; uVar9 < uVar10; uVar9 = uVar9 + 1) {
        uVar5 = FUN_140289b16(lVar1);
        local_a8 = CONCAT44(local_a8._4_4_,uVar5);
        if (puStack_120 == local_118) {
          FUN_1402abfd8(&local_128,puStack_120,&local_a8);
        }
        else {
          *puStack_120 = uVar5;
          puStack_120 = puStack_120 + 1;
        }
      }
      ppppuVar11 = (undefined8 ****)(uVar8 * 0x80 + *local_70 + 0x60);
      if (ppppuVar11 != &local_128) {
        FUN_1402b446e(ppppuVar11,local_128,(longlong)puStack_120 - (longlong)local_128 >> 2);
      }
      FUN_1402161ba(&local_128);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar4);
  }
  uVar4 = FUN_140289b16(lVar1);
  for (uVar10 = 0; uVar10 < uVar4; uVar10 = uVar10 + 1) {
    lVar2 = *local_70;
    uVar5 = FUN_140289b16(lVar1);
    *(undefined4 *)(lVar2 + 0x78 + (ulonglong)uVar10 * 0x80) = uVar5;
  }
  return local_68;
}

