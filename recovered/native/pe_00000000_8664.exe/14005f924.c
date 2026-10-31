/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005f924 */

undefined8 * FUN_14005f924(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

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
  param_2[3] = 7;
  local_48 = param_2;
  if (param_3 != param_4) {
    lVar1 = *param_1;
    lVar3 = FUN_1401901f0(lVar1);
    iVar2 = FUN_1401905f0(lVar3 + 8,0x140f176b8);
    if ((iVar2 != 0) && (iVar2 = FUN_1401905f0(lVar3 + 8,0x140f17578), iVar2 != 0)) {
      return local_48;
    }
    FUN_14004060c(local_68,param_3,param_4,&local_39);
    pppuVar6 = local_68;
    if (7 < local_50) {
      pppuVar6 = (undefined8 ***)local_68[0];
    }
    uVar4 = local_58;
    do {
      puVar5 = local_48;
      if (uVar4 <= (ulonglong)local_48[2]) goto LAB_14005fa1f;
      FUN_140016f7e(local_48,uVar4,0);
      if (7 < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      uVar4 = FUN_14018de90(puVar5,(longlong)puVar5 + uVar4 * 2,pppuVar6,
                            (longlong)pppuVar6 + local_58 * 2,lVar1 + 0x10);
    } while (uVar4 != 0xffffffffffffffff);
    uVar4 = 0;
LAB_14005fa1f:
    FUN_140016f7e(local_48,uVar4,0);
    FUN_140001e90(local_68);
  }
  return local_48;
}

