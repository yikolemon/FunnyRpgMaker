/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10093806 */

void __thiscall FUN_10093806(int *param_1,ushort param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  FUN_10093a3c(iVar2,(int)(short)param_2,param_3 != 0);
  if (param_3 == 0) {
    uVar1 = *(ushort *)(iVar2 + 0x24);
    if ((uVar1 == 0) || (param_2 != 0xffff && uVar1 != 0xffff)) {
      *(ushort *)(iVar2 + 0x24) = uVar1 | param_2;
    }
    else if (uVar1 != param_2) {
      *(ushort *)(iVar2 + 0x24) = uVar1 & param_2;
      *(byte *)(iVar2 + 9) = *(byte *)(iVar2 + 9) | 8;
    }
  }
  else {
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | param_3;
    *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | param_3;
  }
  return;
}

