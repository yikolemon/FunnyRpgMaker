/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ccb68 */

undefined8 FUN_1801ccb68(longlong param_1,int param_2,undefined1 *param_3,int param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    uVar3 = 0x23;
  }
  else {
    if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
      *param_3 = 0;
      if (*(int *)(param_1 + 0x10) <= param_2) {
        return 0x10;
      }
      if ((*(byte *)(param_1 + 9) & 2) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xd0);
        puVar2 = *(undefined8 **)(lVar5 + 0x38);
        if (puVar2 != (undefined8 *)0xfffffffffffffffe) {
          if (puVar2 == (undefined8 *)0x0) {
            pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
            if (pcVar1 == (code *)0x0) {
              puVar2 = (undefined8 *)0x0;
            }
            else {
              puVar2 = (undefined8 *)(*pcVar1)(*(longlong **)(param_1 + 0x90),"glyph-dict");
              lVar5 = *(longlong *)(param_1 + 0xd0);
            }
            puVar4 = (undefined8 *)0xfffffffffffffffe;
            if (puVar2 != (undefined8 *)0x0) {
              puVar4 = puVar2;
            }
            *(undefined8 **)(lVar5 + 0x38) = puVar4;
          }
          if (puVar2 != (undefined8 *)0x0) {
            if ((code *)*puVar2 == (code *)0x0) {
              return 6;
            }
                    /* WARNING: Could not recover jumptable at 0x0001801ccc27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (*(code *)*puVar2)(param_1,param_2,param_3,param_4);
            return uVar3;
          }
        }
      }
    }
    uVar3 = 6;
  }
  return uVar3;
}

