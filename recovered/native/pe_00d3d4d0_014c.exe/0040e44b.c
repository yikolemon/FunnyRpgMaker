/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040e44b */

int * __cdecl FUN_0040e44b(int *param_1,uint *param_2,uint *param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_40;
  uint uStack_3c;
  uint uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  uint local_18;
  
  local_18 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_40 = (uint)param_4;
  uStack_3c = (uint)((ulonglong)param_4 >> 0x20);
  if (param_4 == 0) {
    if (param_5 == 1) {
      if ((int)param_3 - (int)param_2 < 5) {
LAB_0040e5d0:
        *param_1 = (int)param_3;
        param_1[1] = 0x84;
        goto LAB_0040e5d9;
      }
      *(undefined1 *)(param_2 + 1) = 0x30;
      *param_2 = 0x302b6530;
      iVar6 = (int)param_2 + 5;
    }
    else {
      if (param_2 == param_3) goto LAB_0040e5d0;
      *(undefined1 *)param_2 = 0x30;
      iVar6 = (int)param_2 + 1;
    }
    *param_1 = iVar6;
    param_1[1] = 0;
    goto LAB_0040e5d9;
  }
  uVar7 = uStack_3c >> 0x14;
  if (0x433 < uVar7 && param_5 == 2) {
    FUN_0040e692(param_1,(byte *)param_2,(byte *)param_3,local_40,uStack_3c,0);
    goto LAB_0040e5d9;
  }
  uVar9 = (uStack_3c & 0xfffff) + 0xfffff + (uint)(local_40 != 0) +
          (uint)(0xfffffffe < local_40 - 1);
  if (uVar7 - 0x434 < 0xffffffcb) {
LAB_0040e512:
    FUN_0040ec48((longlong *)&local_28,local_40,uStack_3c & 0xfffff,uVar7);
  }
  else {
    uVar5 = 0x433 - uVar7;
    bVar4 = (byte)uVar5;
    uVar2 = -1 << (bVar4 & 0x1f);
    uVar3 = uVar2;
    uVar10 = 0xffffffff;
    if ((uVar5 & 0x20) != 0) {
      uVar3 = 0;
      uVar10 = uVar2;
    }
    if ((~uVar3 & local_40) != 0 || (~uVar10 & uVar9) != 0) goto LAB_0040e512;
    uVar3 = 0xffffffff;
    uVar10 = uVar9 >> (bVar4 & 0x1f);
    uVar7 = local_40 >> (bVar4 & 0x1f) | uVar9 << 0x20 - (bVar4 & 0x1f);
    if ((uVar5 & 0x20) != 0) {
      uVar7 = uVar10;
      uVar10 = 0;
    }
    do {
      local_24 = uVar10;
      local_28 = uVar7;
      lVar1 = (ulonglong)local_24 * 0xcccccccd + ((ulonglong)local_28 * 0xcccccccd >> 0x20);
      uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar2 = (uint)((ulonglong)local_28 * 0xcccccccc >> 0x20);
      uVar7 = (uint)CARRY4((uint)((ulonglong)local_28 * 0xcccccccc),(uint)lVar1);
      uVar9 = uVar2 + uVar5;
      uVar8 = uVar9 + uVar7;
      uVar10 = (uint)((ulonglong)local_24 * 0xcccccccc);
      uVar9 = (int)((ulonglong)local_24 * 0xcccccccc >> 0x20) +
              (uint)(CARRY4(uVar2,uVar5) || CARRY4(uVar9,uVar7)) + (uint)CARRY4(uVar10,uVar8);
      uVar7 = uVar9 * 0x20000000 | uVar10 + uVar8 >> 3;
      uVar3 = uVar3 + 1;
      uVar10 = uVar9 >> 3;
    } while (uVar7 * 10 == local_28);
    local_20 = (ulonglong)uVar3;
  }
  uStack_30 = (uint)local_20;
  uStack_2c = (undefined4)(local_20 >> 0x20);
  FUN_0040fc10(param_1,param_2,(byte *)param_3,local_28,local_24,uStack_30,uStack_2c,param_5,param_4
              );
LAB_0040e5d9:
  if (DAT_0050e8c0 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_18 ^ (uint)&stack0xfffffffc);
}

