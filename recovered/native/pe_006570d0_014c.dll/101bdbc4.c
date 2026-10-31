/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bdbc4 */

void __fastcall
FUN_101bdbc4(byte param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = FUN_101bd5e3();
  if (0 < param_7) {
    bVar1 = *(byte *)(iVar3 + 0x14);
    iVar5 = 0;
    iVar3 = param_4;
    iVar7 = param_2;
    do {
      if (((bVar1 ^ 1) & param_1) == 0) {
        FUN_1025b2d0(iVar5 * param_5 + param_4,iVar5 * param_3 + param_2,param_6 * 4);
      }
      else if (0 < param_6) {
        iVar4 = 0;
        uVar6 = param_6 + 1;
        do {
          uVar2 = *(uint *)(iVar7 + iVar4);
          *(uint *)(iVar3 + iVar4) =
               (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff | uVar2 & 0xff00ff00;
          uVar6 = uVar6 - 1;
          iVar4 = iVar4 + 4;
        } while (1 < uVar6);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + param_5;
      iVar7 = iVar7 + param_3;
    } while (iVar5 != param_7);
  }
  return;
}

