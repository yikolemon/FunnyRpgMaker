/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003d6c6 */

void FUN_14003d6c6(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_e8 [64];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar5 = *(longlong *)(param_1 + 0x388);
  if (lVar5 != 0) {
    bVar1 = *(byte *)(lVar5 + 0x20);
    lVar6 = *(longlong *)(lVar5 + 0x240);
    lVar3 = *(longlong *)(lVar5 + 0x238);
    bVar7 = lVar6 != lVar3;
    if ((!(bool)bVar7) && (*(longlong *)(lVar5 + 0xb8) != 0)) {
      FUN_14003a302(&local_68,lVar5 + 0xa8);
      if (local_58 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x388);
        FUN_140006874(local_88,&local_68);
        FUN_14003a478(lVar5,local_88,lVar5 + 0x238);
        *(undefined1 *)(lVar5 + 0x268) = 0;
        FUN_1400017de(local_88);
      }
      FUN_1400017de(&local_68);
      lVar5 = *(longlong *)(param_1 + 0x388);
    }
    FUN_14003a6d0(lVar5);
    FUN_14003d9bc(*(undefined8 *)(param_1 + 0x388),&local_68);
    if ((local_68 == local_60) || (*(longlong *)(local_68 + 0x10) == 0)) {
      if (bVar1 != 0) {
        FUN_14000169c(local_a8,"config file is required but none was given");
        FUN_14003da16(local_e8,local_a8);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_e8,&DAT_14017a7c8);
      }
    }
    else {
      for (lVar5 = local_68; lVar5 != local_60; lVar5 = lVar5 + 0x20) {
        bVar4 = FUN_14003dc66(param_1,lVar5,
                              CONCAT71((int7)((ulonglong)lVar6 >> 8),lVar6 != lVar3 | bVar1) &
                              0xffffffff);
        bVar7 = bVar7 | bVar4;
      }
      if ((bVar7 & 1) == 0) {
        lVar5 = *(longlong *)(param_1 + 0x388);
        lVar6 = *(longlong *)(lVar5 + 0x238);
        lVar3 = *(longlong *)(lVar5 + 0x240);
        if (lVar6 != lVar3) {
          do {
            FUN_1400017de(lVar6);
            lVar6 = lVar6 + 0x20;
          } while (lVar6 != lVar3);
          *(undefined8 *)(lVar5 + 0x240) = *(undefined8 *)(lVar5 + 0x238);
        }
        *(undefined1 *)(lVar5 + 0x268) = 0;
        uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x388) + 0x26e);
        *(undefined1 *)(*(longlong *)(param_1 + 0x388) + 0x26e) = 0;
        FUN_14003a6d0(*(undefined8 *)(param_1 + 0x388));
        *(undefined1 *)(*(longlong *)(param_1 + 0x388) + 0x26e) = uVar2;
      }
    }
    FUN_14000eeca(&local_68);
  }
  return;
}

