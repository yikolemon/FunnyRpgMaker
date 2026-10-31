/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b2d1e */

undefined8 FUN_1402b2d1e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_d8 [56];
  undefined8 local_a0;
  char *local_98;
  char *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar2 = FUN_1402ad8aa(param_2,&DAT_1406290c0);
  if (cVar2 != '\0') {
    lVar7 = param_2 + 0x10;
    uVar3 = FUN_140289b16(lVar7);
    *(undefined4 *)(param_1 + 0x78) = uVar3;
    iVar4 = FUN_140289b16(lVar7);
    *(int *)(param_1 + 0x58) = iVar4;
    if (*(int *)(param_1 + 0x78) == 120000) {
      FUN_14029cd70(param_2,local_68);
      FUN_1402239f4(param_1 + 0x80,local_68);
      FUN_1402125bc(local_68);
      iVar4 = *(int *)(param_1 + 0x58);
    }
    if (iVar4 != 0) {
      lVar8 = 0x7c;
      uVar6 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x40);
        uVar3 = FUN_140289b16(lVar7);
        *(undefined4 *)(lVar1 + lVar8) = uVar3;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x80;
      } while (uVar6 < *(uint *)(param_1 + 0x58));
    }
    uVar6 = FUN_140289b16(lVar7);
    lVar7 = *(longlong *)(param_1 + 0x60);
    lVar8 = *(longlong *)(param_1 + 0x68);
    uVar5 = (lVar8 - lVar7 >> 3) * 0x2e8ba2e8ba2e8ba3;
    uVar6 = uVar6 & 0xffffffff;
    if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
      FUN_1402b47be(param_1 + 0x60,uVar6,local_68);
      lVar7 = *(longlong *)(param_1 + 0x60);
      lVar8 = *(longlong *)(param_1 + 0x68);
    }
    if (lVar7 != lVar8) {
      do {
        FUN_1402b4688(lVar7,param_2,param_1 + 0x40,(int *)(param_1 + 0x58));
        lVar7 = lVar7 + 0x58;
      } while (lVar7 != lVar8);
    }
    return 1;
  }
  local_a0 = 0x29000001ab;
  local_98 = "indowFlags_NoDecoration";
  local_90 = " your own texture data. Hover the texture for a zoomed view!";
  FUN_140283ef0(local_88);
  FUN_14023203a(local_68,local_88,"p\nSize: %d\nCapacity: %d");
  FUN_140280e42(local_d8,local_68);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_d8,&DAT_1405b7880);
}

