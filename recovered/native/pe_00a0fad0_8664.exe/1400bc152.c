/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bc152 */

void FUN_1400bc152(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_4c0 [608];
  longlong local_260;
  longlong local_258;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1a8 [2];
  undefined1 local_198 [16];
  undefined1 local_188 [32];
  undefined1 local_168 [192];
  undefined1 local_a8 [32];
  ulonglong local_88 [4];
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_88[0] = local_88[0] & 0xffffffffffffff00;
  local_a8[0] = 1;
  local_50 = param_1;
  FUN_14000550c(local_1a8,param_1,0);
  FUN_1400bc6a4(local_4c0,local_1a8,local_a8,local_88);
  FUN_140005690(local_1a8);
  local_58 = local_50 + 0x20;
  FUN_1400bc98c();
  FUN_14000169c(local_88,&DAT_140171149);
  FUN_14000169c(local_a8,&DAT_1401728de);
  FUN_1400bca0a(local_1a8,local_88,local_a8);
  FUN_1400cbd66(local_58,local_1a8);
  FUN_140016e5c(local_168);
  FUN_1400017de(local_188);
  FUN_1400017de(local_1a8);
  FUN_1400017de(local_a8);
  FUN_1400017de(local_88);
  local_88[0] = local_58;
  FUN_14007de26(local_1a8,&DAT_1401cc970,"Collecting WolfX decryption information ... ");
  FUN_140041192(local_198);
  FUN_140052e84(local_1a8);
  FUN_1400cc28e(local_4c0);
  local_60 = local_258;
  while (local_260 != local_60) {
    lVar7 = *(longlong *)(local_260 + 0xb8);
    local_68 = local_260;
    for (lVar5 = *(longlong *)(local_260 + 0xb0); lVar5 != lVar7; lVar5 = lVar5 + 0x80) {
      lVar1 = *(longlong *)(lVar5 + 0x38);
      for (lVar4 = *(longlong *)(lVar5 + 0x30); lVar4 != lVar1; lVar4 = lVar4 + 0xa0) {
        lVar2 = *(longlong *)(lVar4 + 0x88);
        for (lVar6 = *(longlong *)(lVar4 + 0x80); lVar6 != lVar2; lVar6 = lVar6 + 0x10) {
          FUN_1400bcba6(local_88,lVar6);
        }
      }
    }
    local_260 = local_68 + 200;
  }
  FUN_1400cc28e(local_4c0);
  for (lVar5 = local_1e8; lVar5 != local_1e0; lVar5 = lVar5 + 0xde0) {
    lVar4 = *(longlong *)(lVar5 + 0x50);
    for (lVar7 = *(longlong *)(lVar5 + 0x48); lVar7 != lVar4; lVar7 = lVar7 + 0x10) {
      FUN_1400bcba6(local_88,lVar7);
    }
  }
  FUN_1400cd23b(*(longlong *)(local_50 + 0x20),*(longlong *)(local_50 + 0x28),
                (*(longlong *)(local_50 + 0x28) - *(longlong *)(local_50 + 0x20) >> 3) *
                0x2e8ba2e8ba2e8ba3);
  uVar3 = *(undefined8 *)(local_50 + 0x28);
  FUN_1400ceac7(local_1a8,*(undefined8 *)(local_50 + 0x20),uVar3);
  FUN_1400bd0e2(local_58,local_a8,local_1a8[0],uVar3);
  FUN_14007de26(local_1a8,&DAT_1401cc970,"Done");
  FUN_140052e4f(local_198);
  FUN_140052e84(local_1a8);
  FUN_1400bd144(local_4c0);
  return;
}

