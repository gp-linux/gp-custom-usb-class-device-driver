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

// Declarations

int gp_init(void);
void gp_exit(void);

// Module init

int gp_init(void) {
    printk("Initializing custom USD class device\n");
    return 0;
}

// Module exit

void gp_exit(void) {
    printk("Deinitializing custom USD class device\n");
}

// Configure module

module_init(gp_init);
module_exit(gp_exit);

// Meta data
MODULE_AUTHOR("Greg PFISTER");
MODULE_DESCRIPTION("Custom USB class device driver")
MODULE_LICENSE("MIT");

// End
