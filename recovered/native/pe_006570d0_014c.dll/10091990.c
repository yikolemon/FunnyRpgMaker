/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10091990 */

void FUN_10091990(undefined4 *param_1,int param_2,undefined4 param_3,ushort *param_4,ushort *param_5
                 )

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  
joined_r0x100919a2:
  while( true ) {
    puVar4 = param_4;
    if (puVar4 == param_5) {
      *param_1 = param_3;
      return;
    }
    uVar5 = (uint)*puVar4;
    param_4 = puVar4 + 1;
    if (uVar5 == 0x5c) goto LAB_100919e5;
    if (uVar5 != 0x26) break;
    puVar1 = *(undefined4 **)(param_2 + 8);
    if (*(undefined4 **)(param_2 + 0xc) != puVar1) {
      puVar2 = (undefined2 *)puVar1[1];
      for (puVar6 = (undefined2 *)*puVar1; puVar6 != puVar2; puVar6 = puVar6 + 1) {
        FUN_100045e8(*puVar6);
      }
    }
  }
  goto LAB_10091a3e;
LAB_100919e5:
  if (param_4 != param_5) {
    uVar5 = (uint)*param_4;
    if ((ushort)(*param_4 - 0x30) < 10) {
      uVar5 = uVar5 - 0x30;
      iVar3 = *(int *)(param_2 + 8);
      param_4 = puVar4 + 2;
      if (uVar5 < (uint)((*(int *)(param_2 + 0xc) - iVar3 >> 2) * -0x55555555)) {
        puVar2 = *(undefined2 **)(iVar3 + 4 + uVar5 * 0xc);
        for (puVar6 = *(undefined2 **)(iVar3 + uVar5 * 0xc); puVar6 != puVar2; puVar6 = puVar6 + 1)
        {
          FUN_100045e8(*puVar6);
        }
      }
    }
    else {
      param_4 = puVar4 + 2;
LAB_10091a3e:
      FUN_100045e8(uVar5);
    }
  }
  goto joined_r0x100919a2;
}

