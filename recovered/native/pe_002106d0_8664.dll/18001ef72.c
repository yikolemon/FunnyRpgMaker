/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001ef72 */

undefined8 * FUN_18001ef72(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  undefined8 *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  local_48 = param_2;
  if (param_3 != param_4) {
    lVar1 = *param_1;
    lVar3 = FUN_18026e880(lVar1);
    iVar2 = FUN_18026eb10(lVar3 + 8,0x1803fd798);
    if ((iVar2 != 0) && (iVar2 = FUN_18026eb10(lVar3 + 8,0x1803fd7c8), iVar2 != 0)) {
      return local_48;
    }
    FUN_180017a78(local_68,param_3,param_4,&local_39);
    pppuVar6 = local_68;
    if (0xf < local_50) {
      pppuVar6 = (undefined8 ***)local_68[0];
    }
    uVar4 = local_58;
    do {
      puVar5 = local_48;
      if (uVar4 <= (ulonglong)local_48[2]) goto LAB_18001f06f;
      FUN_1800037ec(local_48,uVar4,0);
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      uVar4 = FUN_18023e190(puVar5,uVar4 + (longlong)puVar5,pppuVar6,(longlong)pppuVar6 + local_58,
                            lVar1 + 0x10);
    } while (uVar4 != 0xffffffffffffffff);
    uVar4 = 0;
LAB_18001f06f:
    FUN_1800037ec(local_48,uVar4,0);
    FUN_180001ef2(local_68);
  }
  return local_48;
}

