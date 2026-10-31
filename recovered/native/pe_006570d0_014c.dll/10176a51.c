/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10176a51 */

undefined4 __fastcall FUN_10176a51(void *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = 0;
  iVar5 = 0;
  do {
    if (0 < *(int *)(param_2 + iVar2 * 4)) {
      iVar8 = 0x100;
      if (0x100 < iVar5) {
        iVar8 = iVar5;
      }
      iVar9 = 0;
      do {
        *(char *)((int)param_1 + iVar9 + iVar5 + 0x500) = (char)iVar2 + '\x01';
        if (iVar8 - iVar5 == iVar9) goto LAB_10176b7e;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_2 + iVar2 * 4));
      iVar5 = iVar5 + iVar9;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  *(undefined1 *)((int)param_1 + iVar5 + 0x500) = 0;
  uVar6 = 0;
  uVar3 = 1;
  iVar2 = 0;
  do {
    *(uint *)((int)param_1 + uVar3 * 4 + 0x64c) = iVar2 - uVar6;
    if (uVar3 == *(byte *)((int)param_1 + iVar2 + 0x500)) {
      iVar5 = iVar2 + 0x501;
      do {
        iVar2 = iVar5;
        uVar7 = uVar6;
        *(short *)((int)param_1 + iVar2 * 2 + -0x802) = (short)uVar7;
        uVar6 = uVar7 + 1;
        iVar5 = iVar2 + 1;
      } while (uVar3 == *(byte *)((int)param_1 + iVar2));
      if (uVar7 >> ((byte)uVar3 & 0x1f) != 0) {
LAB_10176b7e:
        FUN_10170e07();
        return 0;
      }
      iVar2 = iVar2 + -0x500;
    }
    *(uint *)((int)param_1 + uVar3 * 4 + 0x604) = uVar6 << (0x10 - (byte)uVar3 & 0x1f);
    uVar6 = uVar6 * 2;
    uVar3 = uVar3 + 1;
    if (uVar3 == 0x11) {
      *(undefined4 *)((int)param_1 + 0x648) = 0xffffffff;
      _memset(param_1,0xff,0x200);
      if (0 < iVar2) {
        iVar5 = 0;
        do {
          bVar4 = *(byte *)((int)param_1 + iVar5 + 0x500);
          if (bVar4 < 10) {
            uVar1 = *(ushort *)((int)param_1 + iVar5 * 2 + 0x200);
            bVar4 = 9 - bVar4;
            uVar6 = 1;
            do {
              uVar3 = uVar6 >> (bVar4 & 0x1f);
              *(char *)((int)param_1 + uVar6 + ((uint)uVar1 << (bVar4 & 0x1f)) + -1) = (char)iVar5;
              uVar6 = uVar6 + 1;
            } while (uVar3 == 0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != iVar2);
      }
      return 1;
    }
  } while( true );
}

