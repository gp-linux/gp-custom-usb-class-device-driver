//
// gp - custom - usb - class - device - driver
// Copyright(C) 2024, Greg PFISTER.MIT License.
//
// THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//

#include <linux/init.h>
#include <linux/module.h>

// Meta data
MODULE_LICENSE("Dual MIT/GPL");
MODULE_AUTHOR("Greg PFISTER");
MODULE_DESCRIPTION("USB device driver");
MODULE_VERSION("1.0");

// Module init
static int __init gp_init(void) {
    printk("Initializing USD device\n");
    return 0;
}

// Module exit
static void __exit gp_exit(void) {
    printk("Deinitializing USD device\n");
}

// Configure module
module_init(gp_init);
module_exit(gp_exit);

// End
